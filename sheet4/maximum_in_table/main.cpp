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
    ll arr[15][15];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            arr[i][j] = 0;
        }
    }
    for(int j=0; j<n; j++) {
        arr[0][j] = 1;
    }
    for(int i=0; i<n; i++) {
        arr[i][0] = 1;
    }

    for(int i = 1; i<n; i++) {
        for(int j = 1; j<n; j++) {
            if (i-1 >=0){
                arr[i][j] += arr[i-1][j];
            }
            if (j-1 >=0) {
                arr[i][j] += arr[i][j-1];
            }
        }
    }
    ll max_val = -2e5;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            max_val = max(max_val, arr[i][j]);
        }
    }
    cout << max_val << endl;
    return 0;

}
