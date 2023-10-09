
#include"hello_greet.hpp"
#include<get_time.hpp>
#include<iostream>


int main(int argc, char* argv[]){
    
    std::cout << HelloGreet("Frodo") << ", current time is " <<GetTimeNow() <<std::endl;
    return 0;
}