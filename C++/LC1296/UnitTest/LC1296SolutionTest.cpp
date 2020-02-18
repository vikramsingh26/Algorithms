//
//  SolutionTest.cpp
//  SolutionTest
//  Unit Test for Solution class
//
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//


#include<iostream>
#include<gtest/gtest.h>
#include<math.h>
#include<Solution.h>

TEST(LC1296SolutionTest, Solution_Test1)
{
    vector<int> v{6,2,3,3,4,4,5,1};
    Solution sol;
    ASSERT_EQ(true, sol.isPossibleDivide(v, 4));
}

TEST(LC1296SolutionTest, Solution_Test2)
{
    vector<int> v {3,2,1,2,3,4,3,4,5,9,10,11};
    Solution sol;
    ASSERT_EQ(true, sol.isPossibleDivide(v, 3));
}

TEST(LC1296SolutionTest, Solution_Test3)
{
    vector<int> v{1,2,3,4} ;
    Solution sol;
    ASSERT_EQ(false,sol.isPossibleDivide(v,3));
}