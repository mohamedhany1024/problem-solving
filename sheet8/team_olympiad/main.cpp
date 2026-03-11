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
    map<int, deque<int>> mp;

    int n;
    cin >> n;
    FORN {
        int x;
        cin >> x;
        mp[x].push_back(i+1);
    }

    ll min_freq = 2e5;

    for(int i = 1; i<=3; i++) {
        min_freq = min(min_freq, (ll)mp[i].size());
    }

    if (min_freq != 0) {
        cout << min_freq << endl;
        for(int i=0; i<min_freq; i++) {
            for(auto& x : mp) {
                cout << x.second.back() << " ";
                x.second.pop_back();
            }
            cout << endl;
        }
    } else {
        cout << 0 << endl;
    }


    return 0;

}
