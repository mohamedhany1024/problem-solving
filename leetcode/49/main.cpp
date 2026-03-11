#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
    map <string, vector<string>> mp;
    vector <string> vec;
    int n;
    cin >> n;
    
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        vec.push_back(s);
    }
    string s2;
    for(int i=0; i<n; i++) {
        s2 = vec[i];
        sort(s2.begin(), s2.end());
        mp[s2].push_back(vec[i]);
    }
    cout << "[";
    for (auto& x : mp) {
        cout << "[";
        for (int i=0; i<x.second.size(); i++) {
            cout << x.second[i] << ", ";
        }
        cout << "]";
    }
    cout << endl;
    return 0;
}