//
//  Solution.h
//  Created by Vikram Singh on 2/5/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//

/*
Leetcode question-https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

Given an array nums of integers, return how many of them contain an even number of digits.
 

Example 1:

        Input: nums = [12,345,2,6,7896]
        Output: 2
        Explanation: 
        12 contains 2 digits (even number of digits). 
        345 contains 3 digits (odd number of digits). 
        2 contains 1 digit (odd number of digits). 
        6 contains 1 digit (odd number of digits). 
        7896 contains 4 digits (even number of digits). 
        Therefore only 12 and 7896 contain an even number of digits.
Example 2:

    Input: nums = [555,901,482,1771]
    Output: 1 
    Explanation: 
    Only 1771 contains an even number of digits.
    
Constraints:

    1 <= nums.length <= 500
    1 <= nums[i] <= 10^5

*/

#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

class Solution{
    public:
        int findeNumbers(vector<int>& nums)
        {
            int event_digit = 0;

            for (auto num : nums)
            {
                int digit = 1;
                while(num>9)
                {

                    digit++;
                    num/=10;

                }
                if(digit % 2 == 0)
                {
                    event_digit++;
                }
            }
            return event_digit;
        }

};