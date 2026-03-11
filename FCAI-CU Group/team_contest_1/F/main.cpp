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

bool brute(string s, int len) {
    for(int i=0; i<=4; i++) {
        for(int j=0; j<len; j++) {
            int num = stoi(s.substr(j, j+i));
            if (num % i != 0) {
                return false;
            }
        }
    }

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
        bool flag = true;
        set<char> s1;
        for(int i=0; i<s.size()-1; i++) {
            //s1.insert(s[i]);
            if ((s[i+1] - '0') % 2 != 0) {
                flag = false;
                break;
            }
            
        }
        //s1.insert(s[s.size()-1]);

        /*if (n == 1) {
            cout << "YES\n";
        } else if (n <= 20) {
            ll num = stoll(s);
            if (num % n == 0 && flag) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }

        } else {
            if (flag) {
                cout << 'YES\n';
            } else {
                cout << "NO\n";
            }
        }*/

        if (n >= 5) {
            cout << "NO\n";
        } else {
            flag = brute(s, n);
        }
       
    }


    return 0;

}
