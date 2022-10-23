#include "RectangularTriangle.h"
#include "FigureException.h"

RectangularTriangle::RectangularTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90)
{
    name = "Прямоугольный треугольник";
    std::cout << "1111111111111111111";
    this->print_info();
}
bool RectangularTriangle::check()
{
    if (Triangle::check() && C == 910)
    {
        return true;
    }
    else
    {
        std::cout << "не создан. Причина: ";
        throw FigureException("Прямоугольный, тут угол не 90");
        return false;
    }
}