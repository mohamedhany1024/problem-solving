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

bool homos(ivec dv) {
    bool side_zeros = false;
    bool is_consistent = true;
    bool end_o_consistency = false;

    for(int i=0; i<dv.size()-1; i++) {
        if (dv[i] != dv[i+1] && dv[i] != 0 && dv[i+1] != 0) {
            return false;
        } else 

        if (dv[i] != dv[i+1] && dv[i] != 0 && dv[i+1] == 0 && !end_o_consistency) {
            end_o_consistency = true;
        } else

        if (dv[i] != dv[i+1] && end_o_consistency) {
            return false;
        } if (dv[i] < 0) {
            return false;
        }
    }

    if (dv[dv.size()-1] < 0) {
        return false;
    }

    return true;
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
        ivec a;
        ivec b;
        FORN {
            int x;
            cin >> x;
            a.push_back(x);
        }
        ivec diff_vec;
        FORN {
            int x;
            cin >> x;
            b.push_back(x);
            diff_vec.push_back(b[i] - a[i]);
        }

        if (homos(diff_vec)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }

    return 0;

}
