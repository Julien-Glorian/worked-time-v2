#include <iostream>
#include "timerStates.hpp"

void TimerStates::setState(Timer *timer) {
    _timer = timer;
}

void HomeState::actions() {
    std::cout << "HomeState" << std::endl;
    _timer->setTimerStates(new ConsultState);
}

void ConsultState::actions() {
    std::cout << "ConsultState" << std::endl;
    _timer->setTimerStates(new SettingsState);
}

void SettingsState::actions() {
    std::cout << "SettingsState" << std::endl;
    _timer->setTimerStates(new RunningState);
}

void RunningState::actions() {
    std::cout << "RunningState" << std::endl;
    _timer->setTimerStates(new BreakState);
}

void BreakState::actions() {
    std::cout << "BreakState" << std::endl;
    _timer->setTimerStates(new HomeState);
}