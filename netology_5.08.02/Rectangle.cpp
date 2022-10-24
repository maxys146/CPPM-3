#include "Rectangle.h"
#include "FigureException.h"


Rectangle::Rectangle()
{
}
Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D)
{
    sides_count = 4;
    name = "�������������";
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
    std::cout << "������.\n";
}
bool Rectangle::check()
{
    if (Quadrangle::check())
    {
        if (a != c) {
            std::cout << "�� ������. �������: ";
            throw FigureException("������� \"a\" �� ����� ������� \"c\"");
        }
        else if (b != d) {
            std::cout << "�� ������. �������: ";
            throw FigureException("������� \"b\" �� ����� ������� \"d\"");
        }
        else if (A != 90 || B != 90 || C != 90 || D != 90) {
            std::cout << "�� ������. �������: ";
            throw FigureException("���� �� ����� 90");
        }
        return true;
    }
}