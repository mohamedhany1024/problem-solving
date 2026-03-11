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

bool has_plus(string s) {
    //bool is_plus_present = false;
    for(int i=0; i<s.size(); i++) {
        if (s[i] == '+') {
            return true;
        } else if (s[i] == '-') {
            return false;
        }
    }
    return false;
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
    ll x = 0;
    string s;
    FORN {
        cin >> s;
        if (has_plus(s)) {
            x++;
        } else {
            x--;
        }
    }
    cout << x << endl;


    return 0;

}
