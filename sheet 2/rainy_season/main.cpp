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

ll longest_consec_rain(string &s) {
    bool rain_seq = false;
    ll rain_seq_len = 0;
    ll max_rain_seq_len = 0;
    for(int i=0; i<s.size(); i++) {
        if (!rain_seq && s[i] == 'R') {
            rain_seq = true;
        }
        if (s[i] == 'R') { 
            rain_seq_len++;
        }

        if (rain_seq && s[i]!='R') {
            rain_seq = false;
            max_rain_seq_len = max(max_rain_seq_len, rain_seq_len);
            rain_seq_len = 0;

        }

        
    }

    if (rain_seq) {
        max_rain_seq_len = max(max_rain_seq_len, rain_seq_len);
    }
    return max_rain_seq_len;
}

int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    string s;
    cin >> s;
    cout << longest_consec_rain(s) << endl;

    return 0;

}
