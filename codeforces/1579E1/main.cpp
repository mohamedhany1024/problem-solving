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
    TC {
        deque <int> dq;
        vector <int> v1;

        int n;
        cin >> n;

        FORN {
            int x;
            cin >> x;
            v1.push_back(x);
        }

        dq.push_back(v1[0]);
        for(int i=1; i<v1.size(); i++) {
            if (v1[i] <= dq.front()) {
                dq.push_front(v1[i]);
            } else {
                dq.push_back(v1[i]);
            }
        }

        for(int i=0; i<dq.size(); i++) {
            cout << dq[i] << " ";
        }
        cout << '\n';
    }


    return 0;

}
