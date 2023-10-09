#include<ctime>
#include<chrono>

#include"get_time.hpp"


char* GetTimeNow(){
    //current time at system clock
    const auto clock_now = std::chrono::high_resolution_clock::now();

    //chrono time point type needs to convert to std::time_t since ctime is crazy
    std::time_t time_now = std::chrono::system_clock::to_time_t(clock_now);
    
    //convert time point to data time
    return std::ctime(&time_now);
}

