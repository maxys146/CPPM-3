// netology_3.02.01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum class months
{
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int monthNumber = 1;
    while (monthNumber != 0)
    {
        std::cin >> monthNumber;
        if (monthNumber > 0 && monthNumber < 13) {
            months month = static_cast<months>(monthNumber);
            switch (month)
            {
            case months::january:
                std::cout << "Январь\n";
                break;
            case months::february:
                std::cout << "Февраль\n";
                break;
            case months::march:
                std::cout << "Март\n";
                break;
            case months::april:
                std::cout << "Апрель\n";
                break;
            case months::may:
                std::cout << "Май\n";
                break;
            case months::june:
                std::cout << "Июнь\n";
                break;
            case months::july:
                std::cout << "Июль\n";
                break;
            case months::august:
                std::cout << "Август\n";
                break;
            case months::september:
                std::cout << "Сентябрь\n";
                break;
            case months::october:
                std::cout << "Октябрь\n";
                break;
            case months::november:
                std::cout << "Ноябрь\n";
                break;
            case months::december:
                std::cout << "Декабрь\n";
                break;
            default:
                std::cout << "Что-то пошло не так!\n";
            }
        }
        else if (monthNumber == 0) {
            std::cout << "До свидания\n";
            break;
        } else {
            std::cout << "Неправильный номер!\n";
        }
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
