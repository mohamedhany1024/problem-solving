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

bool is_pure(string s) {
    deque <char> dq;
    for(int i=0; i<s.size(); i++) {
        dq.push_back(s[i]);
    }

    while (!dq.empty() && dq.front() == '(' && dq.back() == ')') {
        if (!dq.empty()) {
            dq.pop_back();
        }

        if (!dq.empty()) {
            dq.pop_front();
        }
    }

    if (dq.empty()) {
        return true;
    } else {
        return false;
    }
}

bool is_pali(string s) {

    string s2;
    for(int i=0; i<s.size()/2; i++) {
        s2+=s[i];
    }

    for(int i = (s.size() / 2) -1; i >=0; i--) {
        if (s[i] == ')') {
            s2+='(';
            
        } else {
            s2+= ')';
        }
    } 

    if (s2.compare(s) == 0) {
        return true;
    } else {
        return false;
    }

}

bool is_balanced(string s) {
    deque <char> dq;
    if (s.size() >=2) {
        for(int i=1; i<s.size()-1; i++) {
            if (s[i] == '(') {
                dq.push_back('(');
            } else if (!dq.empty() && s[i] == ')' && dq.back() == '(') {
                dq.pop_back();
            }
        }
        return dq.empty();
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
    

    TC {
        string s;
        cin >> s;
        if (is_pure(s)) {
            cout << "NO" << endl;
        } else {
            if (is_balanced(s)) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        } 

    }


    return 0;

}
