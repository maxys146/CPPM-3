#include "Square.h"
#include "FigureException.h"


Square::Square(int a, int b, int c, int d, int A, int B, int C, int D)
{
    sides_count = 4;
    name = "Квадрат";
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
bool Square::check()
{
    if (Rectangle::check())
    {
        if (a != b || b != c || c != d) {
            std::cout << "не создан. Причина: ";
            throw FigureException("Стороны не равны");
        }
        return true;
    }
}