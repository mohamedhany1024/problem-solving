#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int freqArr[10024] = {0};
        map <int, int> freqMap;
        map <int, int> idxMap;
        vector <int> ansV;
        

        for (int i=0; i< nums.size(); i++) {
            freqMap[nums[i]]+=1;
            idxMap[nums[i]] = i;
        }

        for (int i=0; i< nums.size(); i++) {
            if (freqMap[target - nums[i]] != 0) {
                if (idxMap[target-nums[i]] != i) {
                    ansV.push_back(i);
                    ansV.push_back(idxMap[target-nums[i]]);
                    return ansV;
                }
            }
        }
        return ansV;
    }
};