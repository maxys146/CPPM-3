#pragma once
class Transport
{
protected:
    // ����� ������
    int totalRestingTime = 0;
    int restCount = 0;
    int distance = 0;
    int raceTimeWoRest = 0;
    int totalRaceTime = 0;
    // ������ ��� ��
    int speed = 0;
    int timeToRest = 0;
    int resting1stTime = 0;
    int resting2ndTime = 0;
    int restingOtherTime = 0;
public:
    bool setDistance(int distance);
    int getTotalRaceTime();
};

