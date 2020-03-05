//
//  Fibonacci.cpp
//  Fibonacci
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
    int rows = in1.size()+1;
    int cols = in2.size()+1;
    std::cout<<"row=" << rows << "cols=" << cols;
    std::vector<std::vector<int>> length(rows,vector<int>(cols, 0));
    //length.resize(rows, std::vector<int>(cols, 0));
    std::cout << "\ngetLongestCommonSequence";
    for(auto i = 0; i< rows; i++)
    {
        for(auto j=0; j<cols; j++)
        {
            std::cout << "\n[" << i << "][" << j << "]=" << length[i][j];
        }
    }
    //return 5;
    for(auto i = 1; i< rows; i++)
    {
        for(auto j=1; j<cols; j++)
        {
            if(in1[i] == in2[j])
            {
                length[i][j] = 1+length[i-1][j-1];
            }
            else
            {
                std::cout<<"i=" << i << "j=" << j;
                int val1 = length[i][j-1];
                int val2 = length[i-1][j];
                std::cout << "val1=" << val1 << " val2=" << val2 << endl;
                length[i][j] = std::max(val1, val2);
                /* code */
            }

        }
    }
    std::cout << "returing";
    for(auto i = 0; i< rows; i++)
    {
        for(auto j=0; j<cols; j++)
        {
            std::cout << "\n[" << i << "][" << j << "]=" << length[i][j];
        }
    }
    //return 4;
    return length[rows-1][cols-1];
}
