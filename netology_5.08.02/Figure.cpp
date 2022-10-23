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
void Figure::print_info()
{
    std::cout << this->get_name() << " ";
    std::cout << "(cтороны: "
        << this->get_side_a()
        << ", " << this->get_side_b()
        << ", " << this->get_side_c();
    if (this->get_side_d() != 0)
    {
        std::cout << ", " << this->get_side_d();
    }
    std::cout << "; углы: "
        << this->get_angle_A()
        << ", " << this->get_angle_B()
        << ", " << this->get_angle_C();
    if (this->get_angle_D() != 0)
    {
        std::cout << ", " << this->get_angle_D();
    }
    std::cout << ") ";
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