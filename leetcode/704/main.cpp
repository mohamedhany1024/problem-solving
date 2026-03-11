#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int start = 0;
            int end = nums.size()-1;
            int mid = (start+end)/2;

            if (nums.size() == 1) {
                if (nums[0] == target) {
                    return 0;
                } else {
                    return -1;
                }
            }
            while (true) {
                if (nums[mid] == target) {
                    return mid;
                } else if (nums[start] == target) {
                    return start;
                } else if (nums[end] == target) {
                    return end;
                }

                if (nums[mid] > target) {
                    if (mid-1 <= nums.size()-1 && mid-1 >= 0) {
                        end = mid-1;
                    } else {
                        end = nums.size()-1;
                    }
                    
                    mid = (start+end)/2;
                } else if (nums[mid] < target) {
                    if (mid+1 <= nums.size()-1 && mid+1 >=0) {
                        start = mid+1;
                    } else {
                        start = 0;
                    }
                    
                    mid=(start+end)/2;
                }

                if (end-start <= 1) {
                    if (nums[mid] == target) {
                        return mid;
                    } else if (nums[start] == target) {
                        return start;
                    } else if (nums[end] == target) {
                        return end;
                    } else {
                        return -1;
                    }
                }
            }
        }
    };


int main() {
    vector <int> v = {5};
    Solution sol;

    cout << sol.search(v, -5) << endl;
    return 0;
}