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
    //TC {
        int n;
        cin >> n;
        vector<long long> v1, v2;
        FORN {
            int x;
            cin >> x;
            v1.push_back(x);
            v2.push_back(x);
        }
        sort(v2.begin(), v2.end());
        vector <ll> preSum1 (200005);
        vector <ll> preSum2 (200005);
        preSum1[0] = 0;
        preSum2[0] = 0;

        for(int i=1; i<=n; i++) {
            preSum1[i] = v1[i-1]+preSum1[i-1];
            preSum2[i] = v2[i-1]+preSum2[i-1];
        }

        int q; cin >> q;
        while (q--) {
            int t, l, r;
            cin >> t >> l >> r;
            if (t == 1) {
                cout << preSum1[r] - preSum1[l-1] << endl;
            } else {
                cout << preSum2[r] - preSum2[l-1] << endl;
            }
        }
    //}


    return 0;

}
