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
bool debug = false;
int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    TC {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        map <char, int> mp1, mp2;

        for(int i=0; i<s1.size(); i++) {
            mp1[s1[i]]++;
        }
        for(int i=0; i<s2.size(); i++) {
            mp2[s2[i]]++;
        }
        bool flag = false;
        for (auto& x : mp1) {
            if (x.second > 0 && mp2[x.first] > 0) {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "NO" << endl;
        }
    }

    return 0;

}
