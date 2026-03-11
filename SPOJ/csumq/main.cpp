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
    int n; cin >> n;
    ivec v1;
    ivec preSum;
    FORN {
        int x;
        cin >> x;
        v1.push_back(x);
    }


    preSum.push_back(v1[0]);
    for(int i=1; i<n; i++) {
        preSum.push_back(preSum[i-1] + v1[i]);
    }

    int q;
    cin >> q;

    for(int i=0; i<q; i++) {
        int l, r;
        cin >> l >> r;
        if (l > r) {
            swap(l,r);
        }
        cout << preSum[r] - preSum[l-1] << endl;
    }




    return 0;

}
