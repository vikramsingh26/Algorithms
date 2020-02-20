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
#include <map>
#include <chrono>
#include "Fibonacci.h"
using namespace std;

int main(int argc, const char * argv[]) {

    do {
        int number ;
        clear();
        cout << "enter the number to calculate fibannaci or type q for quitting\n";
        cin >> number;
        if(cin.fail())
        {
            cin.clear();
            cout << "Invalid number failed \n";
            break;
        }
        cout << "Number = " << number << endl;
        
        auto start = std::chrono::system_clock::now();

        auto result =  Fibonacci_version1(number);
        std::chrono::duration<double> time_took = std::chrono::system_clock::now() - start; 
        cout << "Result = " << result << "\nTime Took by Version1 = " << std::chrono::duration_cast<std::chrono::milliseconds>(time_took).count() << " milliseconds"<< endl;
        start = std::chrono::system_clock::now();

        result = Fibonacci_version2(number);
        time_took = std::chrono::system_clock::now() - start;
        cout << "Result = " << result << "\nTime Took by Version2 = " << chrono::duration_cast<chrono::milliseconds>(time_took).count() << " milliseconds"<< endl;
        
    }
    while(true);

    return 0;
}
