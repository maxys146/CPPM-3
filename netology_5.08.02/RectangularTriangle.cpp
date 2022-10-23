#include "RectangularTriangle.h"
#include "FigureException.h"

RectangularTriangle::RectangularTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90)
{
    name = "Прямоугольный треугольник";
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