#pragma once
#include "Triangle.h"
class UninhabitedTriangle :
    public Triangle
{
public:
    UninhabitedTriangle(int a, int b, int c, int A, int B, int C);
    bool check() override;
};
