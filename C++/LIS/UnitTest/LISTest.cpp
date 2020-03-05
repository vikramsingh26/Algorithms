//
//  TemplateTest.cpp
//  SolutionTest
//  Unit Test for Solution class
//
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//


#include<iostream>
#include<gtest/gtest.h>
#include<math.h>
#include<LIS.h>

TEST(LISTest, LIS_Test1)
{
    LIS obj;
    std::vector<int> vec = {5,7,4,-3,9,1,10,4,5,8,9,3};
    ASSERT_EQ(5, obj.getLongestIncreasingSequence(vec));
    //vec = {5,7};
    //ASSERT_EQ(2, obj.getLongestIncreasingSequence(vec));
}


TEST(LISTest, LIS_Test2)
{
    LIS obj;
    //std::vector<int> vec = {5,7,4,-3,9,1,10,4,5,8,9,3};
    //ASSERT_EQ(5, obj.getLongestIncreasingSequence(vec));
    auto vec = {5,7};
    ASSERT_EQ(2, obj.getLongestIncreasingSequence(vec));
}