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
    deque <int> dq;
    int n;
    cin >> n;
    int cnt = 0;
    ivec v1;

    FORN {
        int x;
        cin >> x;
        if(!dq.empty()) {
            if (x <= dq.back()) {
                //cout << dq.back() << " ";
                v1.push_back(dq.back());
                dq.push_back(x);
            } else {
                dq.push_back(x);
            }
        } else {
            dq.push_back(x);
        }
    }
    v1.push_back(dq.back());
    cout << v1.size() << endl;
    for(int i=0; i<v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;

}
