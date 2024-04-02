#ifndef WORKED_TIME_V2_TIMER_HPP
#define WORKED_TIME_V2_TIMER_HPP

#include "timerStates.hpp"

class Timer {
private:
    TimerStates *_timerStates;

public:
    explicit Timer(TimerStates *timerStates);

    void setTimerStates(TimerStates *timerStates);
    void runState();

    ~Timer();
};

#endif