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
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '9' && i == 0) {
            continue;
        } else {
            if ((9 - (int)(s[i] - '0')) < (int)(s[i])-'0') {
                s[i] = (char)((9 - (int)(s[i] - '0'))+'0');
            }
        }
    }

    cout << s << endl;

    return 0;

}
