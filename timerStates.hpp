#ifndef WORKED_TIME_V2_TIMER_STATES_HPP
#define WORKED_TIME_V2_TIMER_STATES_HPP

class Timer;

class TimerStates {
protected:
    Timer *_timer;

public:
    void setState(Timer *timer);

    virtual void actions() = 0;

    virtual ~TimerStates() = default;
};

#include "timer.hpp"

class HomeState : public TimerStates {
    void actions() override;
};

class ConsultState : public TimerStates {
    void actions() override;
};

class SettingsState : public TimerStates {
    void actions() override;
};

class RunningState : public TimerStates {
    void actions() override;
};

class BreakState : public TimerStates {
    void actions() override;
};

#endif