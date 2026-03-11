#include <math.h>
#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int findClosestNumber(vector<int>& nums) {
            
            int minDiff = 2e5;
            int num = 2e5;
            for (int i=0; i<nums.size(); i++) {
                
                
                if (abs(nums[i]) <= minDiff) {
                    if (minDiff == abs(nums[i])) {
                        num = max(num, nums[i]);
    
                    } else {
                        num = nums[i];
                        minDiff = abs(nums[i]);
                    }
               
                }
            }

            return num;
        }
    };