#include "Rumb.h"
#include "FigureException.h"


Rumb::Rumb(int a, int b, int c, int d, int A, int B, int C, int D)
{
    sides_count = 4;
    name = "Ромб";
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
bool Rumb::check()
{
    if (Quadrangle::check())
    {
        if (a != b || b != c || c != d) {
            std::cout << "не создан. Причина: ";
            throw FigureException("Стороны не равны");
            return false;
        }
        else if (A != C) {
            std::cout << "не создан. Причина: ";
            throw FigureException("Угол \"A\" не равен углу \"C\"");
            return false;
        }
        else if (B != D) {
            std::cout << "не создан. Причина: ";
            throw FigureException("Угол \"B\" нне равен углу \"D\"");
            return false;
        }
        return true;
    }
}