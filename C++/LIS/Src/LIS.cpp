//
//  Fibonacci.cpp
//  Fibonacci
//
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "LIS.h"
using namespace std;

int LIS::getLongestIncreasingSequence(const std::vector<int>& input)
{
    //std::cout << "yyy\n";
    if(input.empty())
        return 0;

    std::vector<int> L(input.size());
    for(int i=0; i<input.size(); i++)
    {
        L[i] = 1;
        for(int j=0; j<i; j++)
        {
            if((input[j] < input[i]) & 
                (L[i] < 1+L[j]))
            {
                L[i] = 1 + L[j];
            }
        }
    }
 
//std::cout << "emax_pos=" << max_pos << "\n";
    return *max_element(L.begin(), L.end());

}