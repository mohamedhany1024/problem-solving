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
        int n;
        cin >> n;
        int arr[200005];
        FORN {
            cin >> arr[i];
        }

        int min_price = 2e6;
        ll ans = 0;
        for(int i=n-1; i>=0; i--) {
            if (arr[i] > min_price) {
                ans++;
            }

            min_price = min(min_price, arr[i]);
        }
        cout << ans << endl;
    }

    

    return 0;

}
