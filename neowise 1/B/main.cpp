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
    //fio
    TC {
        ll l[200005];
        ll r[200005];
        vector <long long> v1;
        int n, k;
        cin >> n >> k;
        FORN {
            cin >> l[i];
        }

        FORN {
            cin >> r[i];
        }

        FORN {
            v1.push_back(r[i] + l[i]);   
        }

        sort(v1.begin(), v1.end());
        ll ans = 0;
        for(int i=0; i<k; i++) {
            ans+=v1[i];
        }

        cout << ans << endl;
    }
    
    
    return 0;

}
