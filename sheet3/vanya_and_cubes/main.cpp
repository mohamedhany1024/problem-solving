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
    ll sum = 0;
    ll sum2 = 0;
    ll cnt = 0;
    for (int i=1; i<1e4; i++) {
        sum= sum+i;
        sum2+=sum;
        DBB {
            cout << sum2 << " ";
        }
        cnt++;
        if (sum2 >= n) {
            break;
        }
        
    }
    DBB {
        cout << endl;
    }

    if (sum2 > n) {
        cout << cnt-1 << endl;
    } else {
        cout << cnt << endl;
    }




    return 0;

}
