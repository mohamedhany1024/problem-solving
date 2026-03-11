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

pair<int, int> rem_sides(int a, int b) {
    vector<int> sides;
    sides.push_back(a);
    sides.push_back(b);
    sides.push_back(7-a);
    sides.push_back(7-b);

    int ans1 = 0 ;
    int ans2 = 0;
    for(int i=1; i<=6; i++) {
        if (i != sides[0] && i != sides[1] && i != sides[2] && i != sides[3]) {
            if (ans1 == 0) {
                ans1 = i;
            } else {
                ans2 = i;
            }
        }
    }

    return make_pair(ans1, ans2);
    
}
int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    deque<int> dq;
    int n;
    cin >> n;
    int t1;
    cin >> t1;
    dq.push_back(t1);
    int a, b;
    cin >> a >> b;
    for(int i=1; i<n; i++) {
        
        cin >> a >> b;
        pair <int, int> ans = rem_sides(a, b);

        if (ans.first == dq.back()) {
            dq.push_back(ans.second);
        } else if (ans.second == dq.back()) {
            dq.push_back(ans.first);
        } else {
            cout << "NO" << endl;
            return 0;
        }

    }
    cout << "YES" << endl;

    return 0;

}
