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
        deque <char> dq;
        int n;
        string s;
        cin >> n;
        cin >> s;

        for(int i=0; i<s.size(); i++) {
            if (s[i] == '(') {
                dq.push_back('(');
            } else if (s[i] == ')') {
                if (!dq.empty() && dq.back() == '(') {
                    dq.pop_back();
                }
            }
        }

        cout << dq.size() << endl;
    }


    return 0;

}
