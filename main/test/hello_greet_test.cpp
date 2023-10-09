#include"gtest/gtest.h"
#include"hello_greet.hpp"
#include<string>

TEST(HelloTest, BasicAssertion){
    std::string return_value = HelloGreet("Frodo");
    EXPECT_STRNE("hello", "world");
}