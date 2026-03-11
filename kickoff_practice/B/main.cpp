#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin >> t; while(t--)
#define FORN for(int i=0; i<n; i++)
#define FORM for(int j=0; j<m; j++)
#define ivec vector<int>
#define svec vector<string>
#define iimp map<int, int>
#define cimp map<char, int>
#define simp map<string, int>

using namespace std;

int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    //fio
    vector <ll> v1;
    ll sz = 1000000009;
    /*for(ll i=0; i<=1000000009; i++) {
        v1.push_back(i);
    }*/
    //cout << "READY" << endl;

    ll mid = sz/2;
    char x = 'c';
    ll st = 0;
    ll end = sz;
    cout << mid << endl;
    //cin >> x;
    if (x == '=') {
        cout << "! " << mid << endl;
        cout.flush();
        return 0;
    }
    int steps = 0;
    while(x!='=') {
        //cout << v1[mid] << endl;
        cin >> x;

        if (x == '>') {
            st = mid+1;
            mid = (st+end)/2;
            cout << mid << endl;
        } else if (x == '<') {
            end = mid-1;
            mid=(st+end)/2;
            cout << mid << endl;
        } else if (x == '=') {
            cout << "! " << mid << endl;
            //cout << steps << endl;
            cout.flush();
            return 0;
        }
        //steps++;
    }






    return 0;

}
