#include<iostream>

#include"hello_greet.hpp"


std::string HelloGreet(const std::string& name ){

    std::string msg = "Hello " + name + "baggins";
    return msg;

}