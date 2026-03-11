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
    string s, t;
    cin >> s >> t;
    map<char, int> m;
    for(int i=0; i<t.size(); i++) {
        m[t[i]]++;
    }
    bool flag = true;
    for(int i=1; i<s.size(); i++) {
        if (s[i] <= 'Z' && s[i] >= 'A') {
            if (m[s[i-1]] == 0) {
                flag = false;
                break;
            }
        }

    }

    cout << ((flag) ? "Yes" : "No") << endl;
    return 0;

}
