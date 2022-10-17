#include "Rectangle.h"

Rectangle::Rectangle()
{
}
Rectangle::Rectangle(int a, int b)
{
    name = "Прямоугольник";
    this->a = this->c = a;
    this->b = this->d = b;
    this->A = this->B = this->C = this->D = 90;
}