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

int find_max_consec_ps(string s) {
    int maxLen = -2e5;
    int currentLen = 0;
    bool flag = false;
    for(int i=1; i<s.size(); i++) {
        if (s[i] == 'P' && s[i-1] == 'A') {
            flag = true;
        }
        if (flag && s[i] == 'P') {
            currentLen++;
        }

        if (flag && s[i] != 'P') {
            flag = false;
            maxLen = max(maxLen, currentLen);
            currentLen = 0;
        }
    }
    maxLen = max(maxLen, currentLen);
    return maxLen;
}

int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    TC {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << find_max_consec_ps(s) << endl;
    }
    

    return 0;

}
