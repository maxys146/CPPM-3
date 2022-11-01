#pragma once
#include "Transport.h"
class BootsAT :
    public Transport
{
public:
    BootsAT();
    int getTotalRaceTime() override;
};

