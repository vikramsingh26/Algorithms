//
//  MultiThreading.cpp
//  MultiThreading
//
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <thread>
#include "MultiThreading.h"
using namespace std;

void g_func(int n)
{
    std::cout << "Thread 1- g_func , arg=" << n << endl;
}
int main(int argc, const char * argv[]) {
    std::cout << "Hello from MultiThreading" << endl;
    thread th1(g_func, 10);
    th1.join();
    //MultiThreading obj;
    thread th2(&MultiThreading::threadfunc, 20);
    th2.join();

    auto f = [](int number){
        std::cout << "Thread 3- lambda function arg=" << number << endl;
    };
    thread th3(f, 40);
    th3.join();

    std::vector<string> vec {"B", "A", "B", "C", "B"};
    std::vector<string> vec2 = {"A", "B", "C", "D", "B"};
    //std::cout << obj.getLongestCommonSequence(vec, vec2);
    
}
