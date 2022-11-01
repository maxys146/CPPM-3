#pragma once
#include "Transport.h"
class FastCamel :
    public Transport
{
public:
    FastCamel();
    int getTotalRaceTime() override;
};

