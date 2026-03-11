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
    ivec v1;
    int n;
    cin >> n;
    bool has_one = false;
    FORN {
        int x;
        cin >> x;
        if (x == 1) {
            has_one = true;
            cout << -1 << endl;
            return 0;
        }
        //v1.push_back(x);
    }

    if (!has_one) {
        cout << 1 << endl;
    }



    return 0;

}
