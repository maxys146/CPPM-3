#include "RectangularTriangle.h"
#include "FigureException.h"

RectangularTriangle::RectangularTriangle(int a, int b, int c, int A, int B)
{
    sides_count = 3;
    name = "Прямоугольный треугольник";
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = 90;
    std::cout << this->print_data();
    this->check();
    std::cout << "создан.\n";
}
bool RectangularTriangle::check()
{
    if (Triangle::check() && C == 90)
    {
        return true;
    }
    else
    {
        std::cout << "не создан. Причина: ";
        throw FigureException("Угол не 90 градусов\n");
        return false;
    }
}