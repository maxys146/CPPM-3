// netology_5.racegame.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Camel.h"
#include "FastCamel.h"
#include "Centaur.h"
#include "BootsAT.h"
#include "MagicCarpet.h"
#include "Eagle.h"
#include "Broom.h"

void printTransport()
{
    std::cout << "1. Ботинки-вездеходы" << std::endl;
    std::cout << "2. Метла" << std::endl;
    std::cout << "3. Верблюд" << std::endl;
    std::cout << "4. Кентавр" << std::endl;
    std::cout << "5. Орёл" << std::endl;
    std::cout << "6. Верблюд-быстроход" << std::endl;
    std::cout << "7. Ковёр-самолёт" << std::endl;
    std::cout << "0. Закончить регистрацию" << std::endl;
}

void printRegisteredTransport(Transport* transport[7])
{
    if (transport[0] != 0)
    {
        std::cout << "Зарегистрированные транспортные средства: ";
        for (int i = 0; i < 7; i++) {
            if (transport[i] != 0) {
                if (i != 0) {
                    std::cout << ", ";
                }
                std::cout << transport[i]->getName();
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    // TODO Сделать проект на основе Makefile

    // Общие данные
    int userInput = 0;
    int distance = 0;
    int totalTransportCount = 0;

    //std::cout << "Укажите длину дистанции (должна быть положительна): ";
    //std::cin >> distance;
    distance = 4500;
    // TODO Сделать бесконечный цикл для игры с выходом по 0
    // TODO Сделать выбор типа гонки
    std::cout << "Гонка для TODO транспорта. Растояние: " << distance << std::endl;

    Transport** transport = new Transport * [7] {};
    
    while (true) // Цикл регистрации ТС в гонку
    {
        printTransport();
        std::cout << "Выберите траспорт или 0 для окончания процесса регистрации: ";
        std::cin >> userInput;
        system("cls");
        if (userInput >= 1 && userInput <= 7) // Проверка корректности вида ТС
        {
            for (int i = 0; i < 7; i++) { // Цикл для проверки что такое ТС уже зарегистрировано, если нет, добавляем ТС в массив
                if (transport[i] != 0)
                {
                    if (transport[i]->getId() == userInput)
                    {
                        // Такой транспорт есть, выходим
                        std::cout << transport[i]->getName() << " уже зарегистрирован.\n";
                        break;
                    }
                }
                else if (transport[i] == 0)
                {
                    // Пустая ячейка, помещаем транспорт сюда и выходим
                    totalTransportCount++;
                    switch (userInput) {
                    case 1: {
                        transport[i] = new BootsAT();
                        break;
                    }
                    case 2: {
                        transport[i] = new Broom();
                        break;
                    }
                    case 3: {
                        transport[i] = new Camel();
                        break;
                    }
                    case 4: {
                        transport[i] = new Centaur();
                        break;
                    }
                    case 5: {
                        transport[i] = new Eagle();
                        break;
                    }
                    case 6: {
                        transport[i] = new FastCamel();
                        break;
                    }
                    case 7: {
                        transport[i] = new MagicCarpet();
                        break;
                    }
                    default:
                        break;
                    }
                    std::cout << transport[i]->getName() << "(тип " << transport[i]->getType() << ") успешно зарегистрирован.\n";
                    break;
                }

            }
                        
            printRegisteredTransport(transport); // Вывод списка ТС.
            std::cout << std::endl;

            if (transport[6] != 0) // Проверяем заполнен ли массив ТС полностью.
            {
                std::cout << "Зарегистрированы все транспортные средства.\n";
                break;
            }
        }
        else if (userInput == 0) // Проверяем условия выхода из регистрации ТС
        {
            // Проверяем если хотя бы 2 элемента в массиве.
            if (transport[1] != 0)
            {
                // В массиве 2 элемента и более, выходим.
                break;
            }
            else
            {
                std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства.\n";
            }
        }
        else
        {
            std::cout << "Неверный ввод, попробуйте еще раз." << std::endl;
        }
    }

    std::cout << "// Конечный результат после всех выборов.\n";


    for (int i = 0; i < totalTransportCount; i++) { // Устанавливаем дистанцию для всех зарегистрированных ТС.
            transport[i]->setDistance(distance);
    }
 
    bool swapped = false;

    do
    {
        swapped = false;
        for (int i = 0; i < (totalTransportCount - 1); i++)
        {
            if (transport[i + 1]->getTotalRaceTime() < transport[i]->getTotalRaceTime())
            {
                std::swap(transport[i + 1], transport[i]);
                swapped = true;
            }
        }
    } while (swapped);

    for (int i = 0; i < totalTransportCount; i++) {
            transport[i]->setDistance(distance);
            std::cout << (i + 1) << ". " << transport[i]->getName() << ". Время: " << transport[i]->getTotalRaceTime();
            std::cout << "     (тип " << transport[i]->getType() << "). " << std::endl;
    }

    // TODO очистить массив с объектами
    // TODO очищать массив после завершения гонки перед следующей
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
