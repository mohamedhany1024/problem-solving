// Categories: Data Structures
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
    int n;
    cin >> n;
    FORN {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    deque <int> ans;

    for(int i=0; i<v1.size(); i++) {
        if (i % 2 == 0) {
            if (v1.size() % 2 == 0) {
                ans.push_back(v1[i]);
            } else {
                ans.push_front(v1[i]);
            }
        } else {
            if (v1.size() % 2 == 0) {
                ans.push_front(v1[i]);
            } else {
                ans.push_back(v1[i]);
            }
            
        }
    }
    for (auto& x : ans) {
        cout << x << " ";
    }
    cout << '\n';


    return 0;

}
