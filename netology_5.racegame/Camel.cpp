#include "Camel.h"
#include <iostream>

Camel::Camel()
{
    speed = 10;
	timeToRest = 30;
	resting1stTime = 5;
	restingOtherTime = 8;
    transportName = "Верблюд";
}
double Camel::getTotalRaceTime()
{
    raceTimeWoRest = distance / speed;
    restCount = raceTimeWoRest / timeToRest;
    if (floor(restCount) == restCount)
        restCount = restCount - 1;
    else
        restCount = floor(restCount);

    totalRestingTime = resting1stTime + (restingOtherTime * (restCount - 1));

    totalRaceTime = raceTimeWoRest + totalRestingTime;
	return totalRaceTime;
}