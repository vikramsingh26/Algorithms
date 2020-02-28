//
//  FibTest.cpp
//  Fibtest
//  Unit Test for Fibbonaci class
//
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//


#include<iostream>
#include<gtest/gtest.h>
#include<math.h>
#include<Fibonaccii.cpp>

TEST(FibTest, Fibonacci_V2_1)
{
    ASSERT_EQ(0+1, Fibonacci_version2(1));
}
TEST(FibTest, Fibonacci_V2_2)
{
    ASSERT_EQ(0+1, Fibonacci_version2(2));
}
TEST(FibTest, Fibonacci_V2_3)
{
    ASSERT_EQ(1+1, Fibonacci_version2(3));
}
TEST(FibTest, Fibonacci_V2_4)
{
    ASSERT_EQ(1+2, Fibonacci_version2(4));
}
TEST(FibTest, Fibonacci_V2_5)
{
    ASSERT_EQ(5, Fibonacci_version2(5));
}
TEST(FibTest, Fibonacci_V2_50)
{
    ASSERT_EQ(12586269025, Fibonacci_version2(50));
}
