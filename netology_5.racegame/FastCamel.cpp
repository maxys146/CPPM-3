#include "FastCamel.h"

FastCamel::FastCamel()
{
    speed = 40;
    timeToRest = 10;
    resting1stTime = 5;
    resting2ndTime = 7; // TODO Исправить на double, должно быть 6.5
    restingOtherTime = 8;
}
int FastCamel::getTotalRaceTime()
{
    raceTimeWoRest = distance / speed;
    restCount = raceTimeWoRest / timeToRest;

    if (restCount == 1)
    {
        totalRestingTime = resting1stTime;
    }
    else if (restCount == 2)
    {
        totalRestingTime = resting1stTime + resting2ndTime;
    }
    else if (restCount > 2)
    {
        totalRestingTime = resting1stTime + resting2ndTime + (restingOtherTime * (restCount - 2));
    }
    totalRaceTime = raceTimeWoRest + totalRestingTime;
    return totalRaceTime;
}