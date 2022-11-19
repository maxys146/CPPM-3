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

int main()
{
    setlocale(LC_ALL, "Russian");


    int transportArray[7]{};

    for (int i = 0; i < 7; i++) {
        std::cout << i << " - " << transportArray[i] << std::endl;
    }





    return 0;

    // Общие данные
    int distance = 0;

    std::cout << "Укажите длину дистанции (должна быть положительна): ";
    std::cin >> distance;
    //distance = 99000;

    Transport* camel = new Camel();
    camel->setDistance(distance);
    std::cout << camel->getName() << "(" << camel->getType() << "). ";
    std::cout << "Время прохождения дистанции с отдыхом: " << camel->getTotalRaceTime() << std::endl;

    Transport* fastCamel = new FastCamel();
    fastCamel->setDistance(distance);
    std::cout << fastCamel->getName() << "(" << fastCamel->getType() << "). ";
    std::cout << "Время прохождения дистанции с отдыхом: " << fastCamel->getTotalRaceTime() << std::endl;

    Transport* centaur = new Centaur();
    centaur->setDistance(distance);
    std::cout << centaur->getName() << "(" << centaur->getType() << "). ";
    std::cout << "Время прохождения дистанции с отдыхом: " << centaur->getTotalRaceTime() << std::endl;

    Transport* bootsAT = new BootsAT();
    bootsAT->setDistance(distance);
    std::cout << bootsAT->getName() << "(" << bootsAT->getType() << "). ";
    std::cout << "Время прохождения дистанции с отдыхом: " << bootsAT->getTotalRaceTime() << std::endl;

    Transport* magicCarpet = new MagicCarpet();
    magicCarpet->setDistance(distance);
    std::cout << magicCarpet->getName() << "(" << magicCarpet->getType() << "). ";
    std::cout << "Время прохождения дистанции с сокращением: " << magicCarpet->getTotalRaceTime() << std::endl;

    Transport* eagle = new Eagle();
    eagle->setDistance(distance);
    std::cout << eagle->getName() << "(" << eagle->getType() << "). ";
    std::cout << "Время прохождения дистанции с сокращением: " << eagle->getTotalRaceTime() << std::endl;

    Transport* broom = new Broom();
    broom->setDistance(distance);
    std::cout << broom->getName() << "(" << broom->getType() << "). ";
    std::cout << "Время прохождения дистанции с сокращением: " << broom->getTotalRaceTime() << std::endl;

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
