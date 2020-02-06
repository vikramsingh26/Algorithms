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
#include"Fibonnaci.cpp"

TEST(FibTest, Fibonnaci_V2_1)
{
    ASSERT_EQ(0+1, fibonnaci_version2(1));
}
TEST(FibTest, Fibonnaci_V2_2)
{
    ASSERT_EQ(0+1, fibonnaci_version2(2));
}
TEST(FibTest, Fibonnaci_V2_3)
{
    ASSERT_EQ(1+1, fibonnaci_version2(3));
}
TEST(FibTest, Fibonnaci_V2_4)
{
    ASSERT_EQ(1+2, fibonnaci_version2(4));
}
TEST(FibTest, Fibonnaci_V2_5)
{
    ASSERT_EQ(5, fibonnaci_version2(5));
}
TEST(FibTest, Fibonnaci_V2_50)
{
    ASSERT_EQ(12586269025, fibonnaci_version2(50));
}