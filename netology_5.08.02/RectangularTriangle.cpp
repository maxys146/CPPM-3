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
    this->check();
}
bool RectangularTriangle::check()
{
    if (Triangle::check() && C == 90)
    {
        return true;
    }
    else
    {
        throw FigureException("Прямоугольный, тут угол не 90");
        return false;
    }
}