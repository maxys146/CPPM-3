#include "RectangularTriangle.h"
#include "FigureException.h"

RectangularTriangle::RectangularTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90)
{
    name = "������������� �����������";
    std::cout << "1111111111111111111";
    this->print_info();
}
bool RectangularTriangle::check()
{
    if (Triangle::check() && C == 910)
    {
        return true;
    }
    else
    {
        std::cout << "�� ������. �������: ";
        throw FigureException("�������������, ��� ���� �� 90");
        return false;
    }
}