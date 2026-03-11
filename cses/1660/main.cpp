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
    int n, x; cin >> n >> x;
    ivec v1;
    v1.push_back(0);
    FORN {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    vector <ll> preSum (200005);
    preSum[0] = 0;

    for(int i=1; i<=n; i++) {
        preSum[i] = v1[i] + preSum[i-1];
    }
    ll cnt = 0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            ll ans = preSum[j] - preSum[i-1];
            if (ans == x) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    
    

    return 0;

}
