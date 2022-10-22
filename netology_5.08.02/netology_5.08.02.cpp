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


void print_info(Figure* figure)
{
    std::cout << figure->get_name() << " ";
    std::cout << "(cтороны: "
        << figure->get_side_a()
        << ", " << figure->get_side_b()
        << ", " << figure->get_side_c();
    if (figure->get_side_d() != 0)
    {
        std::cout << ", " << figure->get_side_d();
    }
    std::cout << "; углы: "
        << figure->get_angle_A()
        << ", " << figure->get_angle_B()
        << ", " << figure->get_angle_C();
    if (figure->get_angle_D() != 0)
    {
        std::cout << ", " << figure->get_angle_D();
    }
    std::cout << ") ";
}

int main()
{
    setlocale(LC_ALL, "Russian");
    try
    {
        Figure* figure = new Figure();
        print_info(figure);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Figure* triangle = new Triangle(10, 20, 30, 50, 60, 70);
        print_info(triangle);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Figure* bad_triangle = new Triangle(10, 20, 30, 40, 50, 60);
        print_info(bad_triangle);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Figure* triangle_rec = new RectangularTriangle(10, 20, 30, 50, 60);
        print_info(triangle_rec);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;

    try
    {
        Figure* bad_triangle_rec = new RectangularTriangle(10, 20, 30, 40, 50);
        print_info(bad_triangle_rec);
    }
    catch (FigureException& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    std::cout << std::endl;

    return 0;
    
    Figure* triangle = new Triangle(10, 20, 30, 50, 60, 70);
    print_info(triangle);
    delete triangle;
    Figure* triangle_rec = new RectangularTriangle(10, 20, 30, 50, 60);
    print_info(triangle_rec);
    delete triangle_rec;
    Figure* triangle_uni = new UninhabitedTriangle(10, 20, 50, 60);
    print_info(triangle_uni);
    delete triangle_uni;
    Figure* triangle_ecu = new EquilateralTriangle(30);
    print_info(triangle_ecu);
    delete triangle_ecu;
    Figure* quadrangle = new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(quadrangle);
    delete quadrangle;
    Figure* rectangle = new Rectangle(10, 20);
    print_info(rectangle);
    delete rectangle;
    Figure* square = new Square(20);
    print_info(square);
    delete square;
    Figure* parallelogamm = new Parallelogamm(20, 30, 30, 40);
    print_info(parallelogamm);
    delete parallelogamm;
    Figure* rumb = new Rumb(30, 30, 40);
    print_info(rumb);
    delete rumb;
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
