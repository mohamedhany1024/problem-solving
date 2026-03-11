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
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int s, n;
    cin >> s >> n;

    for(int i = 0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        pq.push(make_pair(a, b));
        
    }

    while(!pq.empty() && s > pq.top().first) {
        if (pq.top().first < s) {
            s+=pq.top().second;
            pq.pop();
        }
    }

    if (!pq.empty()) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }


    return 0;

}
