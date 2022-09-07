// netology_1.livegame.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>
// #include <windows.h> // Поддержка русской кодировки в CLion

bool readArray(const std::string& fileName, int** &matrix, int& rows, int& cols) {

    int row = 0;
    int col = 0;
    const unsigned int MAX_SIZE = 100;

    std::ifstream filein(fileName); // открываем файл
    if (!filein.is_open()) {
        return false;
    }

    if (!(filein >> rows) || !(filein >> cols)) {
        return false;
    }
    if (cols == 0 || rows == 0) {
        return false;
    }
    if (cols > MAX_SIZE || rows > MAX_SIZE) {
        return false;
    }

    matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols]();
    }

    // Заполняем массив оставшимися данными из файла
    while (filein >> row && filein >> col) {
        if (row < rows && col < cols) {
            matrix[row][col] = 1;
        }
    }
    filein.close(); // Закрываем файл
    return true;
}

void print(int** numbers, int rows, int cols, int generation, int totalLiveCells) {
    //    std::system("clear");
    for (int a = 0; a < rows; a++) {
        for (int b = 0; b < cols; b++) {
            if (numbers[a][b] == 1) {
                std::cout << "*";
            }
            else {
                std::cout << "-";
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Generation: " << generation;
    std::cout << " Alive cells: " << totalLiveCells;
    std::cout << std::endl;
}

bool CheckCell(int x, int y, int rows, int cols) {
    return !((x < 0) || (x > rows - 1) || (y < 0) || (y > cols - 1));
}

int main(int argc, char** argv) {
    // SetConsoleOutputCP(CP_UTF8); // Поддержка русской кодировки в CLion

    int rows, cols;
    int** mainArray = nullptr;
    bool arrayEqual = false;
    int generation = 1;
    int totalLiveCells;
    bool gameOver = false;
    std::string exitMessage;

    readArray("in.txt", mainArray, rows, cols);

    int** secondArray = new int* [rows];
    for (int i = 0; i < rows; i++) {
        secondArray[i] = new int[cols]();
    }

    while (!arrayEqual) {

        totalLiveCells = 0;
        for (int a = 0; a < rows; a++) {
            for (int b = 0; b < cols; b++) {
                int z = 0;
                totalLiveCells = totalLiveCells + mainArray[a][b];
                // Проверка количества соседних "живых" ячеек
                if (CheckCell(a - 1, b - 1, rows, cols) && mainArray[a - 1][b - 1] == 1) z++;
                if (CheckCell(a - 1, b, rows, cols) && mainArray[a - 1][b] == 1) z++;
                if (CheckCell(a - 1, b + 1, rows, cols) && mainArray[a - 1][b + 1] == 1) z++;
                if (CheckCell(a, b - 1, rows, cols) && mainArray[a][b - 1] == 1) z++;
                if (CheckCell(a, b + 1, rows, cols) && mainArray[a][b + 1] == 1) z++;
                if (CheckCell(a + 1, b - 1, rows, cols) && mainArray[a + 1][b - 1] == 1) z++;
                if (CheckCell(a + 1, b, rows, cols) && mainArray[a + 1][b] == 1) z++;
                if (CheckCell(a + 1, b + 1, rows, cols) && mainArray[a + 1][b + 1] == 1) z++;
                // Проверка условий жизни клетки и заполнение вспомогательного массива
                if (mainArray[a][b] == 0 && z == 3) {
                    secondArray[a][b] = 1;
                }
                else if (mainArray[a][b] == 1 && (z == 2 || z == 3)) {
                    secondArray[a][b] = 1;
                }
                else {
                    secondArray[a][b] = 0;
                }
            }
        }

        print(mainArray, rows, cols, generation, totalLiveCells);

        // Сравнить массивы
        arrayEqual = true;
        for (int a = 0; a < rows; a++) {
            for (int b = 0; b < cols; b++) {
                if (mainArray[a][b] != secondArray[a][b]) {
                    arrayEqual = false;
                    break;
                }
            }
            if (!arrayEqual) {
                break;
            }
        }

        // Условие выхода
        if (arrayEqual) {
            exitMessage = "The world are stagnated. Game over.\n";
            gameOver = true;
        }
        else if (totalLiveCells = 0) {
            exitMessage = "All cells are dead. Game over.\n";
            gameOver = true;
        }
        if (gameOver == true) {
            print(secondArray, rows, cols, generation + 1, totalLiveCells);
            std::cout << exitMessage;
            //    Очищаем память от массива
            for (int i = 0; i < rows; i++) {
                delete[] mainArray[i];
                delete[] secondArray[i];
            }
            delete[] mainArray;
            delete[] secondArray;

            return 0;
        }
        std::cout << "Continue game" << "\n";
        generation++;


        // Записать второй массив в первый
        int ** advPointer;
        advPointer = mainArray;
        mainArray = secondArray;
        secondArray = advPointer;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
