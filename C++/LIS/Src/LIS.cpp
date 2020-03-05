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

int LIS::getLongestIncreasingSequence(std::vector<int> input)
{
    
    std::vector<int> L;
    for(int i=0; i<input.size(); i++)
    {
        L[i] = 1;
        for(int j=0; j<i; j++)
        {
            if((input[j] < input[i]) and 
                (L[i] < (1+L[j])))
            {
                L[i] = 1 + L[j];
            }
        }
    }
    int max_pos = 0;
    for(int i=0; i<L.size(); i++)
    {
        if(L[i] > L[max_pos])
        {
            max_pos = i;
        }
    }

    return L[max_pos];

}