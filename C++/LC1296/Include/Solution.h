//
//  Solution.h
//  Created by Vikram Singh on 2/8/20.
//  Copyright © 2020 Vikram Singh. All rights reserved.
//

/*
Leetcode question-  https://leetcode.com/problems/divide-array-in-sets-of-k-consecutive-numbers/

Given an array of integers nums and a positive integer k, find whether it's possible to divide this array into sets of k consecutive numbers
Return True if its possible otherwise return False.

Example 1:

    Input: nums = [1,2,3,3,4,4,5,6], k = 4
    Output: true
    Explanation: Array can be divided into [1,2,3,4] and [3,4,5,6].

Example 2:

    Input: nums = [3,2,1,2,3,4,3,4,5,9,10,11], k = 3
    Output: true
    Explanation: Array can be divided into [1,2,3] , [2,3,4] , [3,4,5] and [9,10,11].

Example 3:

    Input: nums = [3,3,2,2,1,1], k = 3
    Output: true

Example 4:

    Input: nums = [1,2,3,4], k = 3
    Output: false
    Explanation: Each array should be divided in subarrays of size 3.
 

Constraints:

    1 <= nums.length <= 10^5
    1 <= nums[i] <= 10^9
    1 <= k <= nums.length


*/

#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;

class Solution{
    public:
        bool isPossibleDivide(vector<int>& nums, int k) {
            if(nums.size() % k !=0)
                return false;

            // Copy each element to Multiset.
            multiset<int> mset;
            multiset<int> ms;
            ms.insert(4);
            ms.insert(2);
            ms.insert(2);
            ms.insert(3);
            

            for (auto it=ms.begin(); it!=ms.end(); ++it)
                    std::cout << ' ' << *it;
            cout << endl;
            auto it = ms.find(2);
            ms.erase(it);

            for (auto it=ms.begin(); it!=ms.end(); ++it)
                    std::cout << ' ' << *it;
            cout << endl;
            for (auto& n : nums)
            {
                cout << " " << n ;
                mset.insert(n);
            }
           
             cout << endl;
            for (auto it=mset.begin(); it!=mset.end(); ++it)
                    std::cout << ' ' << *it;

            //
            while(not mset.empty())
            {
                int start_val = *mset.begin();
                cout << "\nstart_val=" << start_val << endl;
                cout << "mset size=" << mset.size() << endl ;
                for(int i=0; i<k; i++)
                {
                    if(mset.empty())
                        return false;
                    auto ith_val = mset.find(start_val+i);
                    //cout << "start_val=" << start_val << endl;
                    //cout << "mset size=" << mset.size() << endl ;
                    for (auto it=mset.begin(); it!=mset.end(); ++it)
                        std::cout << ' ' << *it;
                    cout << " before erase - ith " << i << " val=" << *ith_val << endl;
                    if( ith_val !=mset.end())
                    {
                        mset.erase(ith_val);
                    }
                    else{
                        return false;
                    }
                }

            }


            return true;
        }
};