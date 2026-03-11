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
    int n, k, x;
    cin >> n >> k >> x;
    ivec v1;

    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    ll cnt = 0;
    int steps = 0;
    int i = v1.size()-1;

    while(i >= 0 && steps < k) {
        cnt+=x;
        i--;
        steps++;
    }
    for(int j=0; j<=i; j++) {
        cnt+=v1[j];
    }
    cout << cnt << endl;


    return 0;

}
