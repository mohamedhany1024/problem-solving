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
    ivec v1;
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    sort(v1.begin(), v1.end());
    int min_diff = 2e5;
    int i=0;
    while(true) {
        if(i+n-1 < m) {
            min_diff = min(min_diff, v1[i+n-1]-v1[i]);
        } else {
            break;
        }
        i++;
    }
    cout << min_diff << endl;


    return 0;

}
