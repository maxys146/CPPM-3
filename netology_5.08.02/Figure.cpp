#include "Figure.h"
#include "FigureException.h"
#include <string>  

Figure::Figure()
{
    name = "�����������";
    sides_count = 0;
}
bool Figure::check()
{
    if (this->sides_count != 0)
    {
        std::cout << "�� ������. �������: ";
        throw FigureException("������ �� 0");
    }
}
std::string Figure::print_data()
{
    std::string data;

    data = this->get_name() + " " + "(c������: " + std::to_string(this->get_side_a()) + ", " + std::to_string(this->get_side_b()) + ", " + std::to_string(this->get_side_c());
    if (this->get_side_d() != 0)
    {
        data += ", " + std::to_string(this->get_side_d());
    }
    data += "; ����: " + std::to_string(this->get_angle_A()) + ", " + std::to_string(this->get_angle_B()) + ", " + std::to_string(this->get_angle_C());
    if (this->get_angle_D() != 0)
    {
        data += ", " + std::to_string(this->get_angle_D());
    }
    data += ") ";

    return data;
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