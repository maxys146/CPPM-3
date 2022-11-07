#include "Centaur.h"
#include <iostream>

Centaur::Centaur()
{
    speed = 15;
    timeToRest = 8;
    restingOtherTime = 2;
}
double Centaur::getTotalRaceTime()
{
    raceTimeWoRest = distance / speed;
    restCount = raceTimeWoRest / timeToRest;
    if (floor(restCount) == restCount)
        restCount = restCount - 1;
    else
        restCount = floor(restCount);

    totalRestingTime = restingOtherTime * restCount;

    totalRaceTime = raceTimeWoRest + totalRestingTime;
    return totalRaceTime;
}