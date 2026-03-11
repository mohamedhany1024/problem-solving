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
    int q;
    cin >> q;
    priority_queue <pair<int, int>> pq;
    deque <int> dq;
    map <int, int> mp;
    //map<int, deque<int>> mp2; 
    int cID = 0;
    for(int i=0; i<q; i++) {
        int qq, param;
        cin >> qq;
        if (qq == 1) {
            cin >> param;
            dq.push_back(i);
            mp[cID]=0;
            pq.push(make_pair(param, -cID));
            cID++;
            //mp2[param].push_back(i);
        } else if (qq == 2) {
            if (!dq.empty()) {
                while(mp[dq.front()] != 0) {
                    dq.pop_front();
                }
                cout << dq.front()+1 << " ";
                mp[dq.front()] = 1;
                if(!dq.empty()) {
                    dq.pop_front();
                }

            }
        } else {
            if(!pq.empty()) {
                while(mp[-pq.top().second] != 0) {
                    pq.pop();
                }
                cout << -(pq.top().second-1) << " ";
                mp[-pq.top().second] = 1;
                pq.pop();
            }
        }
    }


    cout << endl;
    return 0;

}
