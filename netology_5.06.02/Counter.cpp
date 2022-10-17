#include "Counter.h"

int number;
void Counter::increase()
{
    number = number++;
}
void Counter::decrease()
{
    number = number--;
}
int Counter::result()
{
    return number;
}
Counter::Counter(int startCount)
{
    number = startCount;
}
Counter::Counter()
{
    number = 1;
}
