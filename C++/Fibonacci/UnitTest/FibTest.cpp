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
#include<Fibonacci.cpp>

TEST(FibTest, Fibonacci_1)
{
    ASSERT_EQ(0+1, Fibonacci_version1(1));
    ASSERT_EQ(0+1, Fibonacci_version2(1));
    ASSERT_EQ(0+1, Fibonacci_version3(1));
}
TEST(FibTest, Fibonacci_2)
{
    ASSERT_EQ(0+1, Fibonacci_version1(2));
    ASSERT_EQ(0+1, Fibonacci_version2(2));
    ASSERT_EQ(0+1, Fibonacci_version3(2));
}
TEST(FibTest, Fibonacci_3)
{
    ASSERT_EQ(1+1, Fibonacci_version1(3));
    ASSERT_EQ(1+1, Fibonacci_version2(3));
    ASSERT_EQ(1+1, Fibonacci_version3(3));
}
TEST(FibTest, Fibonacci_4)
{
    ASSERT_EQ(1+2, Fibonacci_version1(4));
    ASSERT_EQ(1+2, Fibonacci_version2(4));
    ASSERT_EQ(1+2, Fibonacci_version3(4));
}
TEST(FibTest, Fibonacci_5)
{
    ASSERT_EQ(5, Fibonacci_version1(5));
    ASSERT_EQ(5, Fibonacci_version2(5));
    ASSERT_EQ(5, Fibonacci_version3(5));
}
TEST(FibTest, Fibonacci_50)
{
    ASSERT_EQ(12586269025, Fibonacci_version1(50));
    ASSERT_EQ(12586269025, Fibonacci_version2(50));
    ASSERT_EQ(12586269025, Fibonacci_version3(50));
}
