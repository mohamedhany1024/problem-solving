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
    int n, q;
    cin >> n >> q;
    ivec v1;
    vector <long long> v2;
    v1.push_back(0);
    FORN {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    sort(v1.begin(), v1.end());
    v2.push_back(0);
    v2.push_back(v1[1]);
    for(int i=2; i<=n; i++) {
        
        v2.push_back(v1[i] + v2[i-1]);
    }
    
    DBB {
        for(int i=0; i<=n; i++) {
            cout << v2[i] << " ";
        }
        cout << endl;
    }
    while(q--) {
        int x, y;
        cin >> x >> y;
        DBB {
            cout << v2[n-(x-y)] << " "<< v2[n-x] << endl;
        }
        cout << v2[n-(x-y)] - v2[n-x] << endl;
    }



    return 0;

}
