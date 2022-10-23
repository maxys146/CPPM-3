#include "Rectangle.h"
#include "FigureException.h"


Rectangle::Rectangle()
{
}
Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D)
{
    sides_count = 4;
    name = "Прямоугольник";
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    std::cout << this->print_data();
    this->check();
    std::cout << "создан.\n";
}
bool Rectangle::check()
{
    if (Quadrangle::check())
    {
        if (a != c) {
            std::cout << "не создан. Причина: ";
            throw FigureException("Сторона \"a\" не равна стороне \"c\"");
            return false;
        }
        else if (b != d) {
            std::cout << "не создан. Причина: ";
            throw FigureException("Сторона \"b\" не равна стороне \"d\"");
            return false;
        }
        else if (A != 90 || B != 90 || C != 90 || D != 90) {
            std::cout << "не создан. Причина: ";
            throw FigureException("Углы не равны 90");
            return false;
        }
        return true;
    }
}