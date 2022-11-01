#include "Centaur.h"

Centaur::Centaur()
{
    speed = 15;
    timeToRest = 8;
    restingOtherTime = 2;
}
int Centaur::getTotalRaceTime()
{
    raceTimeWoRest = distance / speed;
    restCount = raceTimeWoRest / timeToRest;


    totalRestingTime = restingOtherTime * restCount;

    totalRaceTime = raceTimeWoRest + totalRestingTime;
    return totalRaceTime;
}