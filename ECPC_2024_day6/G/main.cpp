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

bool window_check(string s, int start) {

    set <char> s1;
    for(int i=start; i<start+3; i++) {
        if (i < s.size()) {
            s1.insert(s[i]);
        } else {
            return false;
        }
    }

    if (s1.size() < 3) {
        return true;
    } else {
        return false;
    }
}
int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    int n;
    cin >> n;
    string s;
    cin >> s;
    cimp mp;
    for(int i=0; i<n; i++) {
        mp[s[i]]++;
    }

    
    for(int i=0; i<n; i++) {
        if (window_check(s, i)) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;


    return 0;

}
