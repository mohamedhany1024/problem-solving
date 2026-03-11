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
bool debug = false;
ll find_common(ll n, ll m) {
    if (n % m == 0 || m % n == 0) {
        if (n > m) {
            return n;
        } else if (n < m) {
            return m;
        } else {
            return n;
        }
    } else {
        return n*m;
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
        ll n, m;
        cin >> n >> m;
        ll lcma = lcm(n, m);
        ll ans = (lcma/m)*(lcma/n);

        cout << ans << endl;

    }

    return 0;

}
