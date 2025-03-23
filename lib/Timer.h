#ifndef TIMER_H
#define TIMER_H

#include <chrono>
#include <iostream>

class Timer {
    private:
        std::chrono::high_resolution_clock::time_point start;

    public:
        __declspec(dllexport) Timer();  // Constructor
        __declspec(dllexport) ~Timer(); // Destructor
};

#endif // TIMER_H