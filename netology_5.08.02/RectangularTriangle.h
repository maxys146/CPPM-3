#pragma once
#include "Triangle.h"
class RectangularTriangle :
    public Triangle
{
public:
    RectangularTriangle(int a, int b, int c, int A, int B, int C);
    bool check() override;
};

