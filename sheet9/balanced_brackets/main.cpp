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

bool is_matched(char a, char b) {
    if (a == '{' && b == '}') {
        return true;
    } else if (a == '(' && b == ')') {
        return true;
    } else if (a == '[' && b == ']') {
        return true;
    } else {
        return false;
    }
}

int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    deque <char> dq;
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++) {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
            dq.push_back(s[i]);
        } else {
            if (!dq.empty()) {
                if (!is_matched(dq.back(), s[i])) {
                    cout << "NO" << endl;
                }
                dq.pop_back();
            }
        }
    }

    if (!dq.empty()) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    

    return 0;

}
