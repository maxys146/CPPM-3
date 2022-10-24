#include "Quadrangle.h"
#include "FigureException.h"


Quadrangle::Quadrangle()
{
}
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
{
    sides_count = 4;
    name = "Четырехугольник";
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
bool Quadrangle::check()
{
    if ((A + B + C + D) != 360)
    {
        std::cout << "не создан. Причина: ";
        throw FigureException("Сумма углов не равна 360");
    }
    else if (sides_count != 4)
    {
        std::cout << "не создан. Причина: ";
        throw FigureException("Количество сторон не равно 4");
    }
    else
    {
        return true;
    }


}