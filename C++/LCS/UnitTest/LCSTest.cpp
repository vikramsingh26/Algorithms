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
#include<LCS.h>

TEST(LCSTest, LCS_Test1)
{
    LCS obj;
    std::vector<string> vec {"B", "C", "D", "B", "C","D", "A"};
    std::vector<string> vec2 = {"A", "B", "E", "C", "B", "A"};
    
    ASSERT_EQ(4, obj.getLongestCommonSequence(vec, vec2));
    
}
/*
TEST(LCSTest, LCS_Test2)
{
    LCS obj;
    std::vector<string> vec {"B", "A", "B", "C", "B"};
    std::vector<string> vec2 = {"A", "B", "C", "D", "B"};
    ASSERT_EQ(5, obj.getLongestCommonSequence(vec, vec2));
  
}*/
/*
TEST(LCSTest, LCS_Test3)
{
    LCS obj;
    auto vec = {5,7};
    ASSERT_EQ(2, obj.getLongestIncreasingSequence(vec));
}

TEST(LCSTest, LCS_Test4)
{
    LCS obj;
    std::vector<int> vec = {5};
    ASSERT_EQ(1, obj.getLongestIncreasingSequence(vec));
    
}

TEST(LCSTest, LCS_Test5)
{
    LCS obj;
    std::vector<int> vec = {};
    ASSERT_EQ(0, obj.getLongestIncreasingSequence(vec));
}

TEST(LCSTest, LCS_Test6)
{
    LCS obj;
    auto vec = {1,2,3,4,5,6,7,8,9,10};
    ASSERT_EQ(10, obj.getLongestIncreasingSequence(vec));
}


TEST(LCSTest, LCS_Test7)
{
    LCS obj;
    auto vec = {10,9,8,7,6,5,4,3,2,1};
    ASSERT_EQ(1, obj.getLongestIncreasingSequence(vec));
}


TEST(LCSTest, LCS_Test8)
{
    LCS obj;
    auto vec = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    ASSERT_EQ(6, obj.getLongestIncreasingSequence(vec));
}

TEST(LCSTest, LCS_Test9)
{
    LCS obj;
    auto vec = {10,9,8,7,6,5,4,3,2,1};
    ASSERT_EQ(10, obj.getLongestDecreasingSequence(vec));

    vec = {10,9,8,7,6,11,5,4,3,2,12};
    ASSERT_EQ(9, obj.getLongestDecreasingSequence(vec));

    vec = {1,2,3,4};
    ASSERT_EQ(1, obj.getLongestDecreasingSequence(vec));
    vec = {1,2,3,4,3,2,5};
    ASSERT_EQ(3, obj.getLongestDecreasingSequence(vec));
}
*/