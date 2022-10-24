#include "Parallelogamm.h"
#include "FigureException.h"


Parallelogamm::Parallelogamm(int a, int b, int c, int d, int A, int B, int C, int D)
{
    sides_count = 4;
    name = "��������������";
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
bool Parallelogamm::check()
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
        else if(A != C) {
            std::cout << "�� ������. �������: ";
            throw FigureException("���� \"A\" �� ����� ���� \"C\"");
        }
        else if (B != D) {
            std::cout << "�� ������. �������: ";
            throw FigureException("���� \"B\" ��� ����� ���� \"D\"");
        }
        return true;
    }
}