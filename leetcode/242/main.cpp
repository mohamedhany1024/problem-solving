#include <iostream>

using namespace std;

class Solution {
    public:
        bool isAnagram(string s, string t) {
            int chars[100005] = {0};
            int chars2[100005] = {0};
            if (s.size() != t.size()) {
                return false;
            }
            for (int i=0; i<s.size(); i++) {
                chars[s[i]] += 1;
            }
            for (int i=0; i<t.size(); i++) {
                chars2[t[i]] += 1;
                
            }
            for (int i=0; i<t.size(); i++) {
                if (chars[s[i]] != chars2[s[i]]) {
                    return false;
                }
                
            }
    
            
            return true;
        }
    };