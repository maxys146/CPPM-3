#include "Parallelogamm.h"
#include "FigureException.h"


Parallelogamm::Parallelogamm(int a, int b, int c, int d, int A, int B, int C, int D)
{
    sides_count = 4;
    name = "Параллелограмм";
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
bool Parallelogamm::check()
{
    if (Quadrangle::check())
    {
        if (a != c) {
            std::cout << "не создан. Причина: ";
            throw FigureException("Сторона \"a\" не равна стороне \"c\"");
        }
        else if (b != d) {
            std::cout << "не создан. Причина: ";
            throw FigureException("Сторона \"b\" не равна стороне \"d\"");
        }
        else if(A != C) {
            std::cout << "не создан. Причина: ";
            throw FigureException("Угол \"A\" не равен углу \"C\"");
        }
        else if (B != D) {
            std::cout << "не создан. Причина: ";
            throw FigureException("Угол \"B\" нне равен углу \"D\"");
        }
        return true;
    }
}