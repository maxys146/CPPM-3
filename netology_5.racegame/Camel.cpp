#include "Camel.h"

Camel::Camel()
{
    speed = 10;
	timeToRest = 30;
	resting1stTime = 5;
	restingOtherTime = 8;
}
int Camel::getTotalRaceTime()
{
    raceTimeWoRest = distance / speed;
    restCount = raceTimeWoRest / timeToRest;

    if (restCount == 1)
    {
        totalRestingTime = resting1stTime;
    }
    else if (restCount > 1)
    {
        totalRestingTime = resting1stTime + (restingOtherTime * (restCount - 1));
    }
    totalRaceTime = raceTimeWoRest + totalRestingTime;
	return totalRaceTime;
}