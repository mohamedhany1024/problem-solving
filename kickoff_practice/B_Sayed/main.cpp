#include <bits/stdc++.h>
#define ll long long

using namespace std;

string ask(int n) {
    cout << n << endl;
    cout.flush();
    string s; cin >> s;
    return s;
}

int main()
{
    int l = 0, r = 1e9, mid, ans = -1;
    while (l <= r) {
        mid = (l + r) / 2;
        string s = ask(mid);
        if (s == ">") {
            l = mid + 1;
        }
        else if (s == "<")
        {
            r = mid - 1;
        }
        else {
            ans = mid;
            cout << "! " << ans << endl;
            return 0;
        }
    }
    return 0;
}