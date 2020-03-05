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
    std::vector<int> vec = {5,7,4, -3, 9, 1, 10, 4, 5, 8};
    ASSERT_EQ(5, obj.getLongestIncreasingSequence(std::move(vec)));
    
}

TEST(LISTest, LIS_Test2)
{
    LIS obj;
    std::vector<int> vec = {5,7,4,-3,9,1,10,4,5,8,9,3};
    ASSERT_EQ(6, obj.getLongestIncreasingSequence(std::move(vec)));
}

TEST(LISTest, LIS_Test3)
{
    LIS obj;
    auto vec = {5,7};
    ASSERT_EQ(2, obj.getLongestIncreasingSequence(std::move(vec)));
}

TEST(LISTest, LIS_Test4)
{
    LIS obj;
    std::vector<int> vec = {5};
    ASSERT_EQ(1, obj.getLongestIncreasingSequence(std::move(vec)));
    
}

TEST(LISTest, LIS_Test5)
{
    LIS obj;
    std::vector<int> vec = {};
    ASSERT_EQ(0, obj.getLongestIncreasingSequence(std::move(vec)));
}

TEST(LISTest, LIS_Test6)
{
    LIS obj;
    auto vec = {1,2,3,4,5,6,7,8,9,10};
    ASSERT_EQ(10, obj.getLongestIncreasingSequence(std::move(vec)));
}


TEST(LISTest, LIS_Test7)
{
    LIS obj;
    auto vec = {10,9,8,7,6,5,4,3,2,1};
    ASSERT_EQ(1, obj.getLongestIncreasingSequence(std::move(vec)));
}


TEST(LISTest, LIS_Test8)
{
    LIS obj;
    auto vec = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    ASSERT_EQ(6, obj.getLongestIncreasingSequence(std::move(vec)));
}

TEST(LISTest, LIS_Test9)
{
    LIS obj;
    auto vec = {10,9,8,7,6,5,4,3,2,1};
    ASSERT_EQ(10, obj.getLongestDecreasingSequence(std::move(vec)));

    vec = {10,9,8,7,6,11,5,4,3,2,12};
    ASSERT_EQ(9, obj.getLongestDecreasingSequence(std::move(vec)));

    vec = {1,2,3,4};
    ASSERT_EQ(1, obj.getLongestDecreasingSequence(std::move(vec)));
    vec = {1,2,3,4,3,2,5};
    ASSERT_EQ(3, obj.getLongestDecreasingSequence(std::move(vec)));
}
