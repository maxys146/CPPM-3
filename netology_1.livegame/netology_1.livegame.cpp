// netology_1.livegame.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>
// #include <windows.h> // Поддержка русской кодировки в CLion


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
    if ((x < 0) || (x > rows - 1) || (y < 0) || (y > cols - 1)) {
        return false;
    }
    else {
        return true;
    }
}

int main(int argc, char** argv) {
    // SetConsoleOutputCP(CP_UTF8); // Поддержка русской кодировки в CLion

    std::ifstream filein("in.txt"); // открываем файл
    int rows, cols;
    bool arrayEqual = false;
    int generation = 1;
    int totalLiveCells;


    filein >> rows;
    filein >> cols;

    int** mainArray = new int* [rows];
    for (int i = 0; i < rows; i++) {
        mainArray[i] = new int[cols]();
    }

    int** secondArray = new int* [rows];
    for (int i = 0; i < rows; i++) {
        secondArray[i] = new int[cols]();
    }
    // Заполняем массив оставшимися данными из файла
    while (!filein.eof()) {
        int x, y;
        filein >> x;
        filein >> y;
        mainArray[x][y] = 1;
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
            print(secondArray, rows, cols, generation + 1, totalLiveCells);


            std::cout << "The world are stagnated. Game over.\n";
            //    Очищаем память от массива
            for (int i = 0; i < rows; i++) {
                delete[] mainArray[i];
                delete[] secondArray[i];
            }
            delete[] mainArray;
            delete[] secondArray;
            filein.close();
            return 0;
        }
        std::cout << "Continue game " << arrayEqual << "\n";
        generation++;


        // Записать второй массив в первый
        for (int a = 0; a < rows; a++) {
            for (int b = 0; b < cols; b++) {
                mainArray[a][b] = secondArray[a][b];
            }
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
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
