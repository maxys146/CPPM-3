#pragma once
#include "Figure.h"
class Triangle :
    public Figure
{
public:
    Triangle();
    Triangle(int a, int b, int c, int A, int B, int C);
    bool check() override;
};

