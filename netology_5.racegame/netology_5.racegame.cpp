// netology_5.racegame.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Camel.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    
    // Общие данные
    int totalRestingTime = 0;
    int restCount = 0;
    int distance = 0;
    int raceTimeWoRest = 0;
    int totalRaceTime = 0;
    // Данные для верблюда
    int speed = 10;
    int timeToRest = 30;
    int resting1stTime = 5;
    int resting2ndTime = 8;
    int restingOtherTime = 8;
    // Данные для верблюда-быстрохода
    //int speed = 40;
    //int timeToRest = 10;
    //int resting1stTime = 5;
    //int resting2ndTime = 7;
    //int restingOtherTime = 8;


    Transport* camel = new Camel();
    std::cout << "Время прохождения дистанции из класса: " << camel->getTotalRaceTime() << std::endl;




    //return 0;
    std::cout << "Укажите длину дистанции (должна быть положительна): ";
    std::cin >> distance;
    raceTimeWoRest = distance / speed;

    std::cout << "Время прохождения дистанции без отдыха: " << raceTimeWoRest << std::endl;

    restCount = raceTimeWoRest / timeToRest;
    std::cout << "Всего периодов отдыха: " << restCount << std::endl;

    if (restCount == 1)
    {
        totalRestingTime = resting1stTime;
    }
    else if (restCount == 2)
    {
        totalRestingTime = resting1stTime + resting2ndTime;
    }
    else if (restCount > 2)
    {
        totalRestingTime = resting1stTime + resting2ndTime + (restingOtherTime * (restCount - 2));
    }
    std::cout << "Всего время отдыха: " << totalRestingTime << std::endl;

    totalRaceTime = raceTimeWoRest + totalRestingTime;
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "Время прохождения дистанции с отдыхом: " << totalRaceTime << std::endl;
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
