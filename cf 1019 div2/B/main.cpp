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


bool is_perfect(string s, int switches) {
    if (switches == 1 && s[0] == '0') {
        return true;
    } else {
        return false;
    }
}

bool is_reverse_perfect(string s, int switches) {
    if (s[0] == '1' && switches == 2) {
        return true;
    } else {
        return false;
    }
}

bool is_pure_zero(string s, int n) {
    bool flag = true;

    for(int i=0; i<n; i++) {
        if (s[i] == '1') {
            flag = false;
        }
    }
    
    return flag;
}

bool is_pure_one(string s, int n) {
    bool flag = true;

    for(int i=0; i<n; i++) {
        if (s[i] == '0') {
            flag = false;
        }
    }
    
    return flag;
}

int evaluate(string s, int n) {
    int switches = 0;
    if (s[0] == '1') {
        switches++;
    }

    for(int i=0; i<n-1; i++) {
        if (s[i] != s[i+1]) {
            switches++;
        }
    }
    return switches;
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
        int arr[200005];
        string s;
        /*FORN {
            cin >> arr[i];
        }*/
        cin >> s;
        int switches = evaluate(s, n);
        if (is_pure_zero(s, n)) {
            cout << n << endl;
        } else if (is_pure_one(s, n)) {
            cout << n+1 << endl;
        } else if (is_perfect(s, switches)) {
            cout << n+1 << endl;
        } else if (is_reverse_perfect(s, switches)) {
            //int mod_switch = max(0, switches-1);
            cout << n+1<< endl;
        } else {
            int mod_switch = max(0, switches-2);
            cout << n+mod_switch << endl;
        }
    }


    return 0;

}
