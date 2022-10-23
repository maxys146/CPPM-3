// netology_5.08.02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
    //try
    //{
    //    Figure* figure = new Figure();
    //}
    //catch (FigureException& ex)
    //{
    //    std::cout << ex.what() << std::endl;
    //}
    //std::cout << std::endl;

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

    return 0;
    

    //Figure* triangle_uni = new UninhabitedTriangle(10, 20, 50, 60);
    //print_info(triangle_uni);
    //delete triangle_uni;
    //Figure* triangle_ecu = new EquilateralTriangle(30);
    //print_info(triangle_ecu);
    //delete triangle_ecu;
    //Figure* quadrangle = new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    //print_info(quadrangle);
    //delete quadrangle;
    //Figure* rectangle = new Rectangle(10, 20);
    //print_info(rectangle);
    //delete rectangle;
    //Figure* square = new Square(20);
    //print_info(square);
    //delete square;
    //Figure* parallelogamm = new Parallelogamm(20, 30, 30, 40);
    //print_info(parallelogamm);
    //delete parallelogamm;
    //Figure* rumb = new Rumb(30, 30, 40);
    //print_info(rumb);
    //delete rumb;
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
