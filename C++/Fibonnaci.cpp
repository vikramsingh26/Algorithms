//
//  Fibonnaci.cpp
//  Fibonnaci
//
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

double fibonnaci_version1(double number)
{
    if(number < 1)
        return 0;
    if(number == 1)
        return number;
    
    return fibonnaci_version1(number -1) + fibonnaci_version1(number - 2);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    do {
        int number ;
        cout << "enter the number to calculate fibannaci or type q for quitting\n";
        cin >> number;
        
        if(to_string(number) == "q")
            cout << " quitting";
            exit(0);
        
        if(isdigit(number))
        {
            auto start = std::chrono::system_clock::now();

            auto result =  fibonnaci_version1(number);
            std::chrono::duration<double> time_took = std::chrono::system_clock::now() - start; 
            cout << "Result = " << result << "\nTime Took by Version1 = " << time_took.count();
        }
        else
        {
            cout << "Not a valid number = " << number;
        }
        

    }
    while(true);

    return 0;
}