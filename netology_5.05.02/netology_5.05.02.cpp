﻿// netology_5.05.02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Figure
{
protected:
    int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
    std::string name;
public:
    std::string get_name()
    {
        return name;
    }
    int get_side_a()
    {
        return a;
    }
    int get_side_b()
    {
        return b;
    }
    int get_side_c()
    {
        return c;
    }
    int get_side_d()
    {
        return d;
    }
    int get_angle_A()
    {
        return A;
    }
    int get_angle_B()
    {
        return B;
    }
    int get_angle_C()
    {
        return C;
    }
    int get_angle_D()
    {
        return D;
    }
};

class Triangle : public Figure
{
public:
    Triangle()
    {
    }
    Triangle(int a, int b, int c, int A, int B, int C)
    {
        name = "Треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
};

class RectangularTriangle : public Triangle
{
public:
    RectangularTriangle(int a, int b, int c, int A, int B)
    {
        name = "Прямоугольный треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = 90;
    }
};

class UninhabitedTriangle : public Triangle
{
public:
    UninhabitedTriangle(int a, int b, int A, int B)
    {
        name = "Равнобедренный треугольник";
        this->a = this->c = a;
        this->b = b;
        this->A = this->C = A;
        this->B = B;
    }
};

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle(int a)
    {
        name = "Равносторонний треугольник";
        this->a = this->b = this->c = a;
        this->A = this->B = this->C = 60;
    }
};

class Quadrangle : public Figure
{
public:
    Quadrangle()
    {
    }
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
    {
        name = "Четырехугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
};

class Rectangle : public Quadrangle
{
public:
    Rectangle()
    {
    }
    Rectangle(int a, int b)
    {
        name = "Прямоугольник";
        this->a = this->c = a;
        this->b = this->d = b;
        this->A = this->B = this->C = this->D = 90;
    }
};

class Square : public Rectangle
{
public:
    Square(int a)
    {
        name = "Квадрат";
        this->a = this->c = this->b = this->d = a;
        this->A = this->B = this->C = this->D = 90;
    }
};

class Parallelogamm : public Rectangle
{
public:
    Parallelogamm(int a, int b, int A, int B)
    {
        name = "Параллелограмм";
        this->a = this->c = a;
        this->b = this->d = b;
        this->A = this->C = A;
        this->B = this->D = B;
    }
};

class Rumb : public Rectangle
{
public:
    Rumb(int a, int A, int B)
    {
        name = "Ромб";
        this->a = this->c = this->b = this->d = a;
        this->A = this->C = A;
        this->B = this->D = B;
    }
};

void print_info(Figure figure)
{
    std::cout << figure.get_name() << ": " << "\n";
    std::cout << "Стороны:"
        << " a=" << figure.get_side_a()
        << " b=" << figure.get_side_b()
        << " c=" << figure.get_side_c();
    if (figure.get_side_d() != 0)
    {
        std::cout << " d=" << figure.get_side_d();
    }
    std::cout << "\n";
    std::cout << "Углы:"
        << " A=" << figure.get_angle_A()
        << " B=" << figure.get_angle_B()
        << " C=" << figure.get_angle_C();
    if (figure.get_angle_D() != 0)
    {
        std::cout << " D=" << figure.get_angle_D();
    }
    std::cout << "\n\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Triangle triangle(10, 20, 30, 50, 60, 70);
    print_info(triangle);
    RectangularTriangle triangle_rec(10, 20, 30, 50, 60);
    print_info(triangle_rec);
    UninhabitedTriangle triangle_uni(10, 20, 50, 60);
    print_info(triangle_uni);
    EquilateralTriangle triangle_ecu(30);
    print_info(triangle_ecu);

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(quadrangle);
    Rectangle rectangle(10, 20);
    print_info(rectangle);
    Square square(20);
    print_info(square);
    Parallelogamm parallelogamm(20, 30, 30, 40);
    print_info(parallelogamm);
    Rumb rumb(30, 30, 40);
    print_info(rumb);
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
