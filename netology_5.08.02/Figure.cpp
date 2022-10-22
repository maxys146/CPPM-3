#include "Figure.h"
#include "FigureException.h"

Figure::Figure()
{
    name = "Треугольник";
    sides_count = 0;
    this->check();
}
bool Figure::check()
{
    if (this->sides_count != 0)
    {
        throw FigureException("Сторон нифига не 0");
        return false;
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