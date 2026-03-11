#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin >> t; while(t--)
#define FORN for(int i=0; i<n; i++)
#define ivec vector<int>
#define svec vector<string>

using namespace std;

int main() {
    fio
    double n, m, a;
    cin >> n >> m >> a;
    ll ans = ceil(n/a)*ceil(m/a);
    cout << ans << endl;
    return 0;

}
