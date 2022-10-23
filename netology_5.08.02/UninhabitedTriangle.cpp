#include "UninhabitedTriangle.h"
#include "FigureException.h"

UninhabitedTriangle::UninhabitedTriangle(int a, int b, int c, int A, int B, int C)
{
    sides_count = 3;
    name = "�������������� �����������";
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
bool UninhabitedTriangle::check()
{
    if (Triangle::check())
    {
        if (a != c) {
            std::cout << "�� ������. �������: ";
            throw FigureException("������� \"a\" �� ����� ������� \"b\"\n");
            return false;
        } else if (A != C) {
            std::cout << "�� ������. �������: ";
            throw FigureException("���� \"A\" �� ����� ���� \"B\"\n");
            return false;
        }
        return true;
    }
}