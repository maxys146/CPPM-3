// netology_5.03.01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator
{
public:
    double num1, num2;
    double add()
    {
        return this->num1 + this->num2;
    }
    double multiply()
    {
        return this->num1 * this->num2;
    }
    double subtract_1_2()
    {
        return this->num1 - this->num2;
    }
    double subtract_2_1()
    {
        return this->num2 - this->num1;
    }
    double divide_1_2()
    {
        return this->num1 / this->num2;
    }
    double divide_2_1()
    {
        return this->num2 / this->num1;
    }
};


int main()
{
    Calculator calc;
    calc.num1 = 3;
    calc.num2 = 6;
    std::cout << "num1 + num2 = " << calc.add() << "\n";
    std::cout << "num1 * num2 = " << calc.multiply() << "\n";
    std::cout << "num1 - num2 = " << calc.subtract_1_2() << "\n";
    std::cout << "num1 - num2 = " << calc.subtract_2_1() << "\n";
    std::cout << "num1 / num2 = " << calc.divide_1_2() << "\n";
    std::cout << "num1 / num2 = " << calc.divide_2_1() << "\n";
    
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
