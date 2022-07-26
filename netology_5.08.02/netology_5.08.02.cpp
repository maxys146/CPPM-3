﻿// netology_5.08.02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "FigureException.h"
#include "Figure.h"
#include "Triangle.h"
#include "RectangularTriangle.h"
#include "UninhabitedTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogamm.h"
#include "Rumb.h"


int main()
{
    setlocale(LC_ALL, "Russian");

    // Треугольники
    try
    {
        Figure* triangle = new Triangle(10, 20, 30, 50, 60, 70);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* bad_triangle = new Triangle(11, 22, 33, 40, 50, 60);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;

    // Прямоугольные треугольники
    try
    {
        Figure* triangle_rec = new RectangularTriangle(10, 20, 30, 40, 50, 90);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* triangle_rec_bad_1 = new RectangularTriangle(11, 22, 33, 80, 150, 60);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* triangle_rec_bad_2 = new RectangularTriangle(11, 22, 33, 40, 40, 100);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;

    // Равнобедренные треугольники
    try
    {
        Figure* triangle_uni = new UninhabitedTriangle(10, 20, 10, 50, 80, 50);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* triangle_uni_bad_1 = new UninhabitedTriangle(10, 20, 10, 50, 80, 60);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* triangle_uni_bad_2 = new UninhabitedTriangle(10, 20, 20, 50, 80, 50);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* triangle_uni_bad_2 = new UninhabitedTriangle(10, 20, 10, 40, 80, 60);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;

    // Равносторонний треугольники
    try
    {
        Figure* triangle_equ = new EquilateralTriangle(10, 10, 10, 60, 60, 60);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* triangle_equ_bad_1 = new EquilateralTriangle(10, 10, 10, 50, 60, 60);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* triangle_equ_bad_2 = new EquilateralTriangle(10, 20, 20, 60, 60, 60);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* triangle_equ_bad_2 = new EquilateralTriangle(10, 10, 10, 40, 80, 60);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    
    // Четырехугольники
    try
    {
        Figure* quadrangle = new Quadrangle(10, 20, 30, 50, 90, 70, 110, 90);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* quadrangle_bad = new Quadrangle(11, 22, 33, 40, 50, 60, 70, 80);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    
    // Прямоугольники
    try
    {
        Figure* rectangle = new Rectangle(10, 50, 10, 50, 90, 90, 90, 90);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* rectangle_bad = new Rectangle(10, 20, 30, 20, 90, 90, 90, 90);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* rectangle_bad_1 = new Rectangle(10, 20, 10, 40, 90, 90, 90, 90);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* rectangle_bad_2 = new Rectangle(10, 50, 10, 50, 90, 90, 80, 100);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;

    // Квадраты
    try
    {
        Figure* square = new Square(10, 10, 10, 10, 90, 90, 90, 90);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* square_bad_1 = new Square(10, 10, 10, 10, 90, 90, 90, 100);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* square_bad_2 = new Square(10, 10, 10, 10, 90, 90, 100, 80);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* square_bad_1 = new Square(10, 20, 30, 20, 90, 90, 90, 90);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* square_bad_2 = new Square(10, 20, 10, 40, 90, 90, 90, 90);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;

    // Параллелограммы
    try
    {
        Figure* parallelogamm = new Parallelogamm(10, 20, 10, 20, 60, 120, 60, 120);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* parallelogamm_bad_1 = new Parallelogamm(10, 20, 10, 20, 90, 90, 90, 100);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* parallelogamm_bad_2 = new Parallelogamm(10, 20, 10, 20, 80, 90, 100, 90);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* parallelogamm_bad_1 = new Parallelogamm(10, 20, 10, 20, 90, 70, 90, 110);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* parallelogamm_bad_3 = new Parallelogamm(10, 20, 10, 40, 90, 90, 90, 90);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* parallelogamm_bad_4 = new Parallelogamm(10, 20, 40, 20, 90, 90, 90, 90);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;

    // Ромбы
    try
    {
        Figure* rumb = new Rumb(10, 10, 10, 10, 60, 120, 60, 120);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* rumb_bad_1 = new Rumb(10, 10, 10, 10, 60, 130, 60, 120);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* rumb_bad_2 = new Rumb(10, 10, 10, 10, 60, 130, 60, 110);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* rumb_bad_1 = new Rumb(10, 10, 10, 10, 70, 120, 50, 120);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Figure* rumb_bad_3 = new Rumb(10, 20, 30, 40, 60, 120, 60, 120);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;

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
