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
    string s, s2;
    cin >> s;
    s2 = "";
    
    /*if (s[0] == '+') {
        for(int i=0; i<s.size(); i++) {
            if (s[i] == '-') {
                s2+='+';
            } else {
                s2+='-';
            }
        }
    } else {
        s2 = s;
    }

    //cout << s2 << endl;
    if (s2[0] == s2[s2.size()-1]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }*/
    deque <char> dq;
    if (s.size() % 2 == 0) {
        for(int i=0; i<s.size(); i++) {
            if (!dq.empty()) {
                if (s[i] == dq.back()) {
                    dq.pop_back();
                } else {
                    dq.push_back(s[i]);
                }
            } else {
                dq.push_back(s[i]);
            }
        }

        if (!dq.empty()) {
            cout << "NO" << endl;
            return 0;
        }
    } else {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    



    return 0;

}
