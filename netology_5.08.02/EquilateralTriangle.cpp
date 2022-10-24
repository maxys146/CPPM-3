#include "EquilateralTriangle.h"
#include "FigureException.h"

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C)
{
    sides_count = 3;
    name = "Равносторонний треугольник";
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    std::cout << this->print_data();
    this->check();
    std::cout << "создан.\n";
}
bool EquilateralTriangle::check()
{
    if (Triangle::check())
    {
        if (a != b || b != c) {
            std::cout << "не создан. Причина: ";
            throw FigureException("Стороны не равны");
        }
        else if (A != 60 || B != 60 || C != 60) {
            std::cout << "не создан. Причина: ";
            throw FigureException("Уголы не равны 60");
        }
        return true;
    }
}