#pragma once
#include "Rectangle.h"
class Rumb :
    public Quadrangle
{
public:
    Rumb(int a, int b, int c, int d, int A, int B, int C, int D);
    bool check() override;
};

