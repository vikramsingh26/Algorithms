//
//  LIS.cpp
//  LIS
//
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <chrono>
#include "LIS.h"
using namespace std;

int main(int argc, const char * argv[]) {
    std::cout << "Hello from LIS";
    LIS obj;
    std::vector<int> vec {5,7,4,-3,9,1,10,4,5,8,9,3};
    std::cout << obj.getLongestIncreasingSequence(vec);
    
}
