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

    TC {
        string s;
        cin >> s;
        cimp mp1;
        bool has_duplicates = false;
        int freqArr[125] = {0};
        
        char lb = (char)123;
        char ub = (char)96;

        for(int i=0; i<s.size(); i++) {
            //mp1[s[i]]++;
            freqArr[s[i]]++;
            if(freqArr[s[i]] > 1) {
                has_duplicates = true;
            }
            lb = min(lb, s[i]);
            ub = max(ub, s[i]);
        }

        /*for(int i=0; i<s.size(); i++) {
            if (mp1[(char)(s[i]+1)] == 0 || mp1[(char)(s[i]-1)] == 0) {
                if (s[i] != 'a' && s[i] != 'z') {
                    all_cc = false;
                    break;
                } else if(mp1[(char)(s[i]+1)] == 0 && mp1[(char)(s[i]-1)] == 0) {
                    all_cc = false;
                    break;
                }
            }
        }*/
       bool gap = false;
       for(int i=(int)lb; i<=(int)ub; i++) {
            if(freqArr[i] == 0) {
                gap = true;
                break;
            }
       }

        if (s.size() == 1) {
            cout << "YES" << endl;
        } else if (has_duplicates || gap) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }



    }

    return 0;

}
