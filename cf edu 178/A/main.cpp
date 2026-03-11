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

bool has_decimal(float a) {
    if ((int) a != a) {
        return true;
    } else {
        return false;
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
        ll a, b, c;
        cin >> a >> b >> c;
        ll newC = c-(b-a);


        if (c-(b-a) == b) {
            cout << "YES" << endl;
        } else if (c-(b-a) < b) {
            cout << "NO" << endl;
        } else if ((newC-b) % 3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }


    return 0;

}
