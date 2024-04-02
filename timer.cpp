#include "timer.hpp"

Timer::Timer(TimerStates *timerStates) : _timerStates(nullptr) {
    setTimerStates(timerStates);
}

void Timer::setTimerStates(TimerStates *timerStates) {
    if (_timerStates) {
        delete(_timerStates);
    }
    _timerStates = timerStates;
    _timerStates->setState(this);
}

void Timer::runState() {
    _timerStates->actions();
}

Timer::~Timer() {
    delete(_timerStates);
}