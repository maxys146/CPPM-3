#pragma once
#include "Transport.h"
class Camel :
    public Transport
{
public:
    Camel();
    int getTotalRaceTime() override;
};

