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
    map <string, int> mp;
    svec v1;
    int n;
    cin >> n;
    string x;
    FORN {
        
        cin >> x;
        v1.push_back(x);

    }

    for(int i=v1.size()-1; i>=0; i--) {
        if (mp[v1[i]] == 0) {
            cout << v1[i] << endl;
            mp[v1[i]] = 1;
        }
    }


    return 0;

}
