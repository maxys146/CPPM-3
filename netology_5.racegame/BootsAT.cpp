#include "BootsAT.h"

BootsAT::BootsAT()
{
    speed = 6;
    timeToRest = 60;
    resting1stTime = 10;
    restingOtherTime = 5;
}
int BootsAT::getTotalRaceTime()
{
    raceTimeWoRest = distance / speed;
    restCount = raceTimeWoRest / timeToRest;

    totalRestingTime = resting1stTime + (restingOtherTime * (restCount - 1));

    totalRaceTime = raceTimeWoRest + totalRestingTime;
    return totalRaceTime;
}