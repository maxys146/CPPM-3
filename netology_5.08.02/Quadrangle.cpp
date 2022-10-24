#include "Quadrangle.h"
#include "FigureException.h"


Quadrangle::Quadrangle()
{
}
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
{
    sides_count = 4;
    name = "���������������";
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
bool Quadrangle::check()
{
    if ((A + B + C + D) != 360)
    {
        std::cout << "�� ������. �������: ";
        throw FigureException("����� ����� �� ����� 360");
    }
    else if (sides_count != 4)
    {
        std::cout << "�� ������. �������: ";
        throw FigureException("���������� ������ �� ����� 4");
    }
    else
    {
        return true;
    }


}