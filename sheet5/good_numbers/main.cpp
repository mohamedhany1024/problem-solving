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
    int n, k;
    cin >> n >> k;
    ll cnt = 0;
    
    for(int i=0; i<n; i++) {
        string s;
        map<char, int>mp;
        cin >> s;
        for(int i=0; i<s.size(); i++) {
            mp[(int)(s[i] - '0')]++;
        }
        bool flag = true;
        bool has_zero = false;
        if (k == 0) {
            for(int i = 0; i<s.size(); i++) {
                if (s[i] == '0') {
                    has_zero = true;
                    break;
                }
            }

            if(!has_zero) {
                flag = false;
            }
        } else {
            for(int i=0; i<=k; i++) {
                if (mp[i] == 0) {
                    flag = false;
                }
            }
        }
        if (flag) {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;

}
