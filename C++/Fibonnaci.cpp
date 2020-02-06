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
    if(g_map.find(number) != g_map.end())
    {
        return g_map[number];
    }
    double value = 0;
    if((number == 0) or (number == 1))
    {
        value = number;
    }
    else if(number > 1)
    {
        value = fibonnaci_version2(number - 1) + fibonnaci_version2(number - 2);
    }

    g_map[number]  = value;
    return value;
}

int main(int argc, const char * argv[]) {
    // insert code here...
   
    do {
        int number ;
        cout << "enter the number to calculate fibannaci or type q for quitting\n";
        cin >> number;
        if(cin.fail())
        {
            cin.clear();
            cout << "Invalid failed \n";
            break;
        }
        cout << "Number = " << number << endl;
        
        auto start = std::chrono::system_clock::now();

        auto result =  fibonnaci_version1(number);
        std::chrono::duration<double> time_took = std::chrono::system_clock::now() - start; 
        cout << "Result = " << result << "\nTime Took by Version1 = " << time_took.count() << " seconds"<< endl;
        start = std::chrono::system_clock::now();

        result = fibonnaci_version2(number);
        time_took = std::chrono::system_clock::now() - start;
        cout << "Result = " << result << "\nTime Took by Version2 = " << time_took.count() << " seconds"<< endl;
        
    }
    while(true);

    return 0;
}