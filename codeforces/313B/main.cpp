#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin >> t; while(t--)
#define FORN for(int i=0; i<n; i++)
#define FORM for(int j=0; j<m; j++)
#define DBB if(debug)
#define ivec vector<int>
#define svec vector<string>
#define iimp map<int, int>
#define cimp map<char, int>
#define simp map<string, int>

using namespace std;
bool debug = 0;
int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    string s;
    cin >> s;
    int q;
    cin >> q;
    int preSum[200005] = {0};
    int arr[200005] = {0};
    for(int i=0; i<s.size(); i++) {
        if (s[i] == '.') {
            arr[i+1] = 0;
        } else {
            arr[i+1] = 1;
        }
    }

    for(int i=1; i<=s.size()-1; i++) {
        arr[i] = arr[i] ^ arr[i+1];
    }
    arr[s.size()] = 1;
    for(int i=1; i<s.size(); i++) {
        if (arr[i] == 0) {
            preSum[i] = preSum[i-1] + 1;
        } else {
            preSum[i] = preSum[i-1];
        }
    }
    preSum[s.size()] = preSum[s.size()-1];


    while (q--) {
       int l, r;
       cin >> l >> r;
       if (arr[r] == 0) {
            cout << preSum[r] - preSum[l-1]-1  << endl;
       } else {
            cout << preSum[r] - preSum[l-1]  << endl;
       }
    }
    


    return 0;

}
