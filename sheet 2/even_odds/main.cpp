#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin >> t; while(t--)
#define FORN for(int i=0; i<n; i++)
#define ivec vector<int>
#define svec vector<string>
#define iimp map<int, int>
#define cimp map<char, int>
#define simp map<string, int>

using namespace std;

int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    ll n, k;
    cin >> n >> k;
    ll even_start;
    ll odd_start = 1;
    bool is_in_even_region = false;
    if (n % 2 == 0) {
        if (k > n/2) {
            is_in_even_region = true;
            even_start = (n/2)+1;
        } else {
            is_in_even_region = false;
        }
    } else {
        if (k > ((n/2)+1)) {
            is_in_even_region = true;
            even_start = (n/2)+2;
        } else {
            is_in_even_region = false;
        }
    }

    if (is_in_even_region) {
        cout << 2 * (k-even_start+1) << endl;
    } else {
        cout << (2*k)-1 << endl;
    }


    
    
    return 0;

}
