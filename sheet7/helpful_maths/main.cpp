#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin >> t; while(t--)
#define FORN for(int i=0; i<n; i++)
#define FORM for(int j=0; j<m; j++)
#define ivec vector<int>
#define svec vector<string>
#define iimp map<int, int>
#define cimp map<char, int>
#define simp map<string, int>

using namespace std;

int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    deque <int> dq;
    ivec v1;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            v1.push_back(s[i] - '0');
        }
    }

    sort(v1.begin(), v1.end());

    if (v1.size() > 1) {
        for(int i=0; i<v1.size()-1; i++) {
            cout << v1[i] <<"+";
        }
        cout << v1[v1.size()-1];
    } else {
        cout << v1[0];
    }
    cout << endl;

    
    return 0;

}
