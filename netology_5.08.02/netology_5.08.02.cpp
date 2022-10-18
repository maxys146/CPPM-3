// netology_5.08.02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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


class FigureException2 : public std::domain_error
{
public:
    FigureException2(const std::string& what) : std::domain_error(what)
    {
    }
};



//Triangle::Triangle(int a, int b, int c, int A, int B, int C, const std::string& name) : Figure(tri, name)
//{
//    set_sides_abc(a, b, c);
//    set_corners_ABC(A, B, C);
//    set_corners_count(tri);
//    set_sides_count(tri);
//    set_name(name);
//    std::stringstream message;
//    if ((a <= 0)  (b <= 0)  (c <= 0)) {
//        print_info(false);
//        message.str(std::string());
//        message << "Причина: ";
//        message << "все длины сторон должны быть положительным числом";
//        throw FigureException(message.str());
//    }
//
//}
void print_info(Figure* figure)
{
    std::cout << figure->get_name() << ": " << "\n";
    std::cout << "Стороны:"
        << " a=" << figure->get_side_a()
        << " b=" << figure->get_side_b()
        << " c=" << figure->get_side_c();
    if (figure->get_side_d() != 0)
    {
        std::cout << " d=" << figure->get_side_d();
    }
    std::cout << "\n";
    std::cout << "Углы:"
        << " A=" << figure->get_angle_A()
        << " B=" << figure->get_angle_B()
        << " C=" << figure->get_angle_C();
    if (figure->get_angle_D() != 0)
    {
        std::cout << " D=" << figure->get_angle_D();
    }
    std::cout << "\n\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Figure* figure = new Figure();
    print_info(figure);



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
    try
    {
        //throw Exception("asdasd");
        throw FigureException2("Причина: сумма углов треугольника не равна 180");
    }
    catch (FigureException2& ex)
    {
        //std::cout << ex.what() << std::endl;
        std::cout << ex.what() << std::endl;
    }
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
