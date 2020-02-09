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

TEST(LC1295SolutionTest, Solution_Test1)
{
    vector<int> v{12,345,2,6,7896};
    Solution sol;
    ASSERT_EQ(2, sol.findeNumbers(v));
}

TEST(LC1295SolutionTest, Solution_Test2)
{
    vector<int> v{12,345,2,6,7896,78};
    Solution sol;
    ASSERT_EQ(3, sol.findeNumbers(v));
}

TEST(LC1295SolutionTest, Solution_Test3)
{
    vector<int> v{1,345,2,6,7896};
    Solution sol;
    ASSERT_EQ(1, sol.findeNumbers(v));
}
