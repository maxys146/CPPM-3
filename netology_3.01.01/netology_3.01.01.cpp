// netology_3.01.01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>


int main(int argc, char** argv) {

#include <iostream>
#include <fstream>

    std::ifstream filein("in.txt"); // открываем файл
    int sizeArr1, sizeArr2;
    filein >> sizeArr1;
    int* arr1 = new int[sizeArr1];

    for (int i = 0; i < sizeArr1; i++) {
        filein >> arr1[i];
    }
    filein >> sizeArr2;
    int* arr2 = new int[sizeArr2];

    for (int i = 0; i < sizeArr2; i++) {
        filein >> arr2[i];
    }
    filein.close();

    std::ofstream fileout("out.txt"); // открываем файл с выводом

    // Пишем в файл массив 2 в новом порядке
    fileout << sizeArr2 << "\n";
    fileout << arr2[sizeArr2 - 1] << " ";
    for (int i = 0; i < sizeArr2 - 1; i++) {
        fileout << arr2[i] << " ";
    }
    fileout << std::endl;

    // Пишем в файл массив 1 в новом порядке
    fileout << sizeArr1 << "\n";
    for (int i = 1; i < sizeArr1; i++) {
        fileout << arr1[i] << " ";
    }
    fileout << arr1[0];

    fileout.close();
    delete[] arr1;
    delete[] arr2;

    return 0;
}
