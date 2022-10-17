#pragma once

class Counter
{
private:
    int number;
public:
    void increase();
    void decrease();
    int result();
    Counter(int startCount);
    Counter();
};

