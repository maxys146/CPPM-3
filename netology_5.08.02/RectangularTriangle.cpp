#include "RectangularTriangle.h"
#include "FigureException.h"

RectangularTriangle::RectangularTriangle(int a, int b, int c, int A, int B, int C)
{
    sides_count = 3;
    name = "������������� �����������";
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    std::cout << this->print_data();
    this->check();
    std::cout << "������.\n";
}
bool RectangularTriangle::check()
{
    if (Triangle::check() && C == 90)
    {
        return true;
    }
    else
    {
        std::cout << "�� ������. �������: ";
        throw FigureException("���� \"C\" �� 90 ��������\n");
        return false;
    }
}