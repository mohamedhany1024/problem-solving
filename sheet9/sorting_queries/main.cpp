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
    priority_queue <int, vector<int>, greater<int>> pq;
    TC {
        int x, y;
        cin >> x;
        if (x == 1) {
            cin >> y;
            dq.push_back(y);

        } else if (x == 2) {
            if (!pq.empty()) {
                cout << pq.top() << endl;
                pq.pop();
            } else {
                cout << dq.front() << endl;
                dq.pop_front();
            }


        } else if (x == 3) {
            //sort(dq.begin(), dq.end());
            while(!dq.empty()) {
                pq.push(dq.front());
                dq.pop_front();
            }

        }

    }

    return 0;

}
