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
    deque <pair<int, int>> dq;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        dq.push_back(make_pair(x, i));
    }
    while (dq.size() != 1) {
        if (dq.front().first <= m) {
            dq.pop_front();
        } else {
            dq.push_back(make_pair(dq.front().first - m, dq.front().second));
            dq.pop_front();
        }
    }
    cout << dq.front().second+1 << endl;


    return 0;

}
