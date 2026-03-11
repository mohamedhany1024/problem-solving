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

bool is_palindrome(string s) {

    string s2 = "";
    for(int i=s.size()-1; i>=0; i--) {
        s2+=s[i];
    }

    if (s.compare(s2) == 0) {
        return true;
    } else {
        return false;
    }

}

string remove_consec_zeros(string s) {
    bool is_zero_seq = false;
    int last_zero_idx = -1;
    string s2 = "";
    for(int i=s.size()-1; i>=0; i--) {
        if (!is_zero_seq && s[i] == '0') {
            is_zero_seq = true;
        }

        if (is_zero_seq && s[i] == '0') {
            last_zero_idx = i;
        }

        if (is_zero_seq && s[i] != '0') {
            is_zero_seq = false;
            break;
        }
    }

    for(int i=0; i<last_zero_idx; i++) {
        s2+=s[i];
    }
    if (s[s.size()-1] != '0') {
        return s;
    } else {
        return s2;
    }
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
    string s2 = s;
    if (is_palindrome(s)) {
        cout << "Yes" << endl;
        return 0;
    }
    

    s2 = remove_consec_zeros(s2);
    //cout << s2 << endl;

    if (is_palindrome(s2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;

}
