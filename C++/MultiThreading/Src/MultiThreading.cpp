//
//  MultiThreading.cpp
//  MultiThreading
//
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "MultiThreading.h"
using namespace std;

void MultiThreading::threadfunc(int number)
{
    std::cout << "THread2- MultiThreading::threadfunc arg=" << number << endl;
}
