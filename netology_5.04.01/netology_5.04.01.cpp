// netology_5.04.01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
        return city + ", " + street + ", " + std::to_string(apartment) + ", " + std::to_string(room);
    }
    Address(std::string city, std::string street, int apartment, int room) {
        this->city = city;
        this->street = street;
        this->apartment = apartment;
        this->room = room;
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");


    Address address("asd", "qwe", 1, 2);
    std::cout << address.get_output_address();

    return 0;

    std::ifstream filein("in.txt");
    int size;
    std::string fileData;
    filein >> size;
    int* arr = new int[size];

    while (!filein.eof()) {
        filein >> fileData;
        std::cout << fileData << std::endl;
    }
    //for (int i = size - 1; i >= 0; i--) {
    //    std::cout << arr[i] << " ";
    //}
    filein.close();
    delete[] arr;
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
