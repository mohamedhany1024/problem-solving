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
    int n;
    cin >> n;
    ivec v1;
    int max_h = -2e5;
    int min_h = 2e5;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
        min_h = min(min_h, x);
        max_h = max(max_h, x);
    }
    int d1, d2 = 0;
    int min_idx, max_idx;

    for(int i=0; i<n; i++) {
        if (v1[i] == max_h) {
            d1 = i - 0;
            max_idx = i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--) {
        if (v1[i] == min_h) {
            d2 = (n-1) - i;
            min_idx = i;
            break;
        }
    }

    if (min_idx < max_idx) {
        cout << d1+d2-1 << endl;
    } else {
        cout << d1+d2 << endl;
    }

    

    return 0;

}
