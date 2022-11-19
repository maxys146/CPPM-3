#pragma once
#include <iostream>

class Transport
{
protected:
    // Общие данные
    double totalRestingTime = 0;
    double restCount = 0;
    int distance = 0;
    double raceTimeWoRest = 0;
    double totalRaceTime = 0;
    // Данные для ТС
    int speed = 0;
    double timeToRest = 0;
    double resting1stTime = 0;
    double resting2ndTime = 0;
    double restingOtherTime = 0;
    std::string transportName = "Транспорт";
public:
    bool setDistance(int distance);
    virtual double getTotalRaceTime();
    std::string getName();
};

