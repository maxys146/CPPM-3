#include "Figure.h"
#include "FigureException.h"

Figure::Figure()
{
    name = "�����������";
}
bool Figure::check()
{
    if (this->sides_count != 1)
    {
        throw FigureException("������ ������ �� 0");
        std::cout << "false";
        return false;
    }
    else
    {
        std::cout << "true";
        return true;
    }
}
std::string Figure::get_name()
{
    return name;
}
int Figure::get_side_a()
{
    return a;
}
int Figure::get_side_b()
{
    return b;
}
int Figure::get_side_c()
{
    return c;
}
int Figure::get_side_d()
{
    return d;
}
int Figure::get_angle_A()
{
    return A;
}
int Figure::get_angle_B()
{
    return B;
}
int Figure::get_angle_C()
{
    return C;
}
int Figure::get_angle_D()
{
    return D;
}