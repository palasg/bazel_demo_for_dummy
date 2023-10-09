#include<ctime>
#include<chrono>

#include"get_time.hpp"


char* GetTimeNow(){
    const auto clock_now = std::chrono::high_resolution_clock::now();
    std::time_t time_now = std::chrono::system_clock::to_time_t(clock_now);
    return std::ctime(&time_now);
}

