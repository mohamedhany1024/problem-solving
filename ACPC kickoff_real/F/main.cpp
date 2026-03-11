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
int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    int n;
    cin >> n;
    ll m1 = 1;
    ll m2 = 1;
    ivec ans;
    ivec v1;
    FORN {
        int x;
        cin >> x;
        if (x == 1) {
            ans.push_back(1);
            m1*=1;
            continue;
        }
        v1.push_back(x);
        if (gcd(x, m1) == 1) {
            ans.push_back(1);
            m1*=x;
        } else if (gcd(x, m2) == 1) {
            ans.push_back(2);
            m2*=x;
        } else if (m1 == 1) {
            ans.push_back(1);
            m1*=x;
            
        } else if (m2 == 1) {
            ans.push_back(2);
            m2*=x;
        } else {
            cout << -1 << endl;
            return 0;
        }


    }

    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;



    return 0;

}
