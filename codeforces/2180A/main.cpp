#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int l, a, b;
        cin >> l >> a >> b;
        int ans = (l-a-1)/b;
        cout << ans << endl;
    }
    return 0;
}