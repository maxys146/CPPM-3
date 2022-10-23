#include "Triangle.h"
#include "FigureException.h"


Triangle::Triangle()
{
}
Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
    sides_count = 3;
    name = "Треугольник";
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;

    this->print_info();
    this->check();
}
bool Triangle::check()
{
    if ((A + B + C) != 180)
    {
        std::cout << "не создан. Причина: ";
        throw FigureException("Сумма углов не равна 180");
        return false;
    }
    else if (sides_count != 3)
    {
        std::cout << "не создан. Причина: ";
        throw FigureException("Количество сторон не равно 3");
        return false;
    }
    else
    {
        return true;
    }
    
    
}
