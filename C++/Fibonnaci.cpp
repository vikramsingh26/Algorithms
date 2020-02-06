//
//  Fibonnaci.cpp
//  Fibonnaci
//
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include "Fibonnaci.h"
using namespace std;

double fibonnaci_version1(int number)
{
    if(number < 1)
        return 0;
    if(number == 1)
        return number;
    
    return fibonnaci_version1(number -1) + fibonnaci_version1(number - 2);
}

map<int, double> g_map;
double fibonnaci_version2(int number)
{
    // Time complexity =  O(n)
    // Space Complexity = O(n)
    if(g_map.find(number) == g_map.end())
    {
        if((number == 0) or (number == 1))
        {
            g_map[number] = number;
        }
        else if(number > 1)
        {
            g_map[number] = fibonnaci_version2(number - 1) + fibonnaci_version2(number - 2);
        }
    }

    return g_map[number];
}