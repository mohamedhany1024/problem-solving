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
    vector <int> v1;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(2);

    for(int i=3; i<=1000000; i++) {
        v1.push_back((v1[i-1] % 10) * (v1[i-2] % 10));
    }

    int x;
    cin >> x;

    cout << v1[x-1] << endl;



    return 0;

}
