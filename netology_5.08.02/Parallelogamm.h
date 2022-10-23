#pragma once
#include "Rectangle.h"
class Parallelogamm :
    public Quadrangle
{
public:
    Parallelogamm(int a, int b, int c, int d, int A, int B, int C, int D);
    bool check() override;
};

