#include "RectangularTriangle.h"
#include "FigureException.h"

RectangularTriangle::RectangularTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90)
{
    name = "������������� �����������";
    this->check();
}
bool RectangularTriangle::check()
{
    if (Triangle::check() && C == 90)
    {
        return true;
    }
    else
    {
        throw FigureException("�������������, ��� ���� �� 90");
        return false;
    }
}