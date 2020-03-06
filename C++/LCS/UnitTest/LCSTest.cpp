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
    //LCS BCBA
    ASSERT_EQ(4, obj.getLongestCommonSequence(vec, vec2));
    
}

TEST(LCSTest, LCS_Test2)
{
    LCS obj;
    std::vector<string> vec {"A", "B", "C", "D", "G", "H"};
    std::vector<string> vec2 = {"A", "E", "D", "F", "H", "R"};
    //LCS=ADH
    ASSERT_EQ(3, obj.getLongestCommonSequence(vec, vec2));
  
}

TEST(LCSTest, LCS_Test3)
{
    LCS obj;
    std::vector<string> vec {"A", "G", "G", "T", "A", "B"};
    std::vector<string> vec2 = {"G", "X", "T", "X", "A", "Y", "B"};
    //LCS=GTAB
    ASSERT_EQ(4, obj.getLongestCommonSequence(vec, vec2));
}

TEST(LCSTest, LCS_Test4)
{
    LCS obj;
    std::vector<string> vec {"A", "A", "B", "C", "B"};
    std::vector<string> vec2 = {"A", "B", "C", "D", "B"};
    //LCS=ABCB
    ASSERT_EQ(4, obj.getLongestCommonSequence(vec, vec2));
    
}

TEST(LCSTest, LCS_Test5)
{
    LCS obj;
    std::vector<string> vec {"B", "N", "T", "C", "R"};
    std::vector<string> vec2 = {"A", "B", "C", "D", "B"};
    //LCS=BC
    ASSERT_EQ(2, obj.getLongestCommonSequence(vec, vec2));
}

TEST(LCSTest, LCS_Test6)
{
    LCS obj;
    std::vector<string> vec {"X", "Y", "Z", "L", "M"};
    std::vector<string> vec2 = {"A", "B", "C", "D", "B"};
    //LCS=0
    ASSERT_EQ(0, obj.getLongestCommonSequence(vec, vec2));
}


TEST(LCSTest, LCS_Test7)
{
    LCS obj;
    std::vector<string> vec {"B", "A", "B", "C", "B"};
    std::vector<string> vec2 = {"B", "A", "B", "C", "B"};
    //LCS=BABCB
    ASSERT_EQ(5, obj.getLongestCommonSequence(vec, vec2));
}


TEST(LCSTest, LCS_Test8)
{
    LCS obj;
    std::vector<string> vec {"B", "A", "B", "C", "B"};
    std::vector<string> vec2 = {"A", "B", "C", "D", "B"};
    //LCS=ABCB
    ASSERT_EQ(4, obj.getLongestCommonSequence(vec, vec2));
}
/*
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
