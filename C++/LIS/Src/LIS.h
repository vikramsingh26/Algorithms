//
//  LIS.h
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//


#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class LIS{
    
    public:
        int getLongestIncreasingSequence(const std::vector<int>& v);
        int getLongestDecreasingSequence(const std::vector<int>& v);
    

};