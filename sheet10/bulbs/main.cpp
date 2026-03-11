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
    int n, m;
    cin >> n >> m;
    set <int> s1;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        for(int i=0; i<x; i++) {
            int y;
            cin >> y;
            s1.insert(y);
        }
    }

    if (s1.size() == m) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }


    return 0;

}
