#include "Triangle.h"
#include "FigureException.h"


Triangle::Triangle()
{
}
Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
    sides_count = 3;
    name = "�����������";
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    
    this->check();
}
bool Triangle::check()
{
    if ((A + B + C) == 180 && sides_count == 3)
    {
        return true;
    }
    else
    {
        throw FigureException("������ �����������, ��� 180 ��� ������� �� 3");
        return false;
    }
}
