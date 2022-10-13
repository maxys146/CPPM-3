// netology_5.05.01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Figure
{
protected:
    int sides_count;
    std::string name;

public:
    Figure()
    {
        name = "Фигура";
        sides_count = 0;
    }
    int get_sides_count()
    {
        return sides_count;
    }
    std::string get_name()
    {
        return name;
    }
};

class Triangle : public Figure
{
public:
    Triangle()
    {
        name = "Треугольник";
        sides_count = 3;
    }
};

class Quadrangle : public Figure
{
public:
    Quadrangle()
    {
        name = "Четырехугольник";
        sides_count = 4;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Figure figure;
    Triangle traingle;
    Quadrangle quadrangle;
    std::cout << "Количество сторон: \n";
    std::cout << figure.get_name() << ": " << figure.get_sides_count() << "\n";
    std::cout << traingle.get_name() << ": " << traingle.get_sides_count() << "\n";
    std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << "\n";

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
