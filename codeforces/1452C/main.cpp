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
        deque <char> dq1;
        deque <char> dq2;

        string s;
        cin >> s;
        int cnt = 0;

        for(int i=0; i<s.size(); i++) {
            if (s[i] == '(') {
                dq1.push_back('(');
            }

            if (s[i] == ')') {
                if (!dq1.empty()) {
                    if (dq1.back() == '(') {
                        dq1.pop_back();
                        cnt++;
                    }
                }
            }

            if (s[i] == '[') {
                dq2.push_back('[');
            }

            if (s[i] == ']') {
                if (!dq2.empty()) {
                    if (dq2.back() == '[') {
                        dq2.pop_back();
                        cnt++;
                    }
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;

}
