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
        int n, j, k;

        cin >> n >> j >> k;
        vector <int> v1;
        int max_num = -1e9;
        int min_num = 1e9;
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            v1.push_back(x);
            max_num = max(max_num, x);
            min_num = min(min_num, x);

        }

        if (v1[j-1] == max_num) {
            cout << "YES" << endl;
        } else if (k >=2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;

}
