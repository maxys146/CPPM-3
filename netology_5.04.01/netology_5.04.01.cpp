﻿// netology_5.04.01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>

class Address
{
private:
    std::string city, street;
    int apartment, room;
public:
    std::string get_output_address()
    {
        return city + ", " + street + ", " + std::to_string(apartment) + ", " + std::to_string(room) + "\n";
    }
    Address(std::string city, std::string street, int apartment, int room) {
        this->city = city;
        this->street = street;
        this->apartment = apartment;
        this->room = room;
    }
    Address() {
        this->city = this->street = "";
        this->apartment = this->room = 0;
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");

    std::string city, street;
    int apartment, room;
    std::ifstream filein("in.txt");
    int sizeArr;
    std::string fileData;
    filein >> sizeArr;

    Address *address_arr = new Address[sizeArr];

    for (int i = 0; i < sizeArr; i++) {
        filein >> city;
        filein >> street;
        filein >> apartment;
        filein >> room;
        address_arr[i] = Address(city, street, apartment, room);
    }

    filein.close();

    std::ofstream fileout("out.txt");
    fileout << sizeArr << "\n";
    for (int i = sizeArr - 1; i >= 0; i--) {
        fileout << address_arr[i].get_output_address();
    }
    fileout << std::endl;

    delete[] address_arr;
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
