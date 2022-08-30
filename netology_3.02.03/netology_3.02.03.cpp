// netology_3.02.03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


struct address {
    std::string city;
    std::string street;
    int apartment;
    int room;
    int postCode;
};

void printAddress(address address) {
    std::cout << "Город: " << address.city << "\n";
    std::cout << "Улица: " << address.street << "\n";
    std::cout << "Номер дома: " << address.apartment << "\n";
    std::cout << "Квартира: " << address.room << "\n";
    std::cout << "Индекс: " << address.postCode << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");


    address address1;
    address1.city = "Москва";
    address1.street = "Арбат";
    address1.apartment = 12;
    address1.room = 8;
    address1.postCode = 123456;
    printAddress(address1);
    //std::cout << address1.city;
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
