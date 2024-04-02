#include <iostream>
#include "timer.hpp"
#include "timerStates.hpp"

int main() {
    Timer timer(new HomeState);
    timer.runState();
    timer.runState();
    timer.runState();
    timer.runState();
    timer.runState();
    timer.runState();
}
