//
//  LCS.cpp
//  LCS
//
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "LCS.h"
using namespace std;

int LCS::getLongestCommonSequence(const std::vector<string>& in1, const std::vector<std::string> in2)
{
    int rows = in1.size();
    int cols = in2.size();
    std::cout<<"row=" << rows << "cols=" << cols;
    std::vector<std::vector<int>> length(rows+1,vector<int>(cols+1, 0));
    for(auto i = 1; i<= rows; i++)
    {
        for(auto j=1; j<=cols; j++)
        {
            if(in1[i-1] == in2[j-1])
            {
                length[i][j] = 1 + length[i-1][j-1];
            }
            else
            {
                length[i][j] = std::max(length[i][j-1], length[i-1][j]);
            }

        }
    }
    return length[rows][cols];
}
