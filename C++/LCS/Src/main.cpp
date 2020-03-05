//
//  LCS.cpp
//  LCS
//
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <chrono>
#include "LCS.h"
using namespace std;

int main(int argc, const char * argv[]) {
    std::cout << "Hello from LCS";
    LCS obj;
    std::vector<string> vec {"B", "A", "B", "C", "B"};
    std::vector<string> vec2 = {"A", "B", "C", "D", "B"};
    std::cout << obj.getLongestCommonSequence(vec, vec2);
    
}
