//
//  Solution.h
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//


#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

class Temp{
    public:
    template<typename T>
    void inc(T& arg)
    {
         arg++;
    }
    template<typename T>
    T add(T& T1, T& T2)
    {
        return T1 + T2;
    }
    

};