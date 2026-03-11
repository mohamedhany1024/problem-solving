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
        priority_queue <pair<int, int>> pq;
        priority_queue <pair<int, int>> pq2;
        int n;
        cin >> n;
        int maxNum = -2e5;
        int maxId = 0;
        FORN {
            int x;
            cin >> x;
            dq.push_back(x);
            pq.push(make_pair(x, i));
            if (x > maxNum) {
                maxNum = x;
                maxId = i;
            }
        }
        pq2.push(pq.top());
        pq.pop();
        while(!pq.empty() && maxId != 0) {
            if (pq.top().second < maxId) {
                pq2.push(make_pair(pq.top().first, pq.top().second));
                
                
                maxId = pq.top().second;
                
            }
            pq.pop();
        }
        int kamoon = n;
        while(!pq2.empty()) {
            //cout << pq2.top().first << " ";
            for(int i=pq2.top().second; i<kamoon; i++) {
                cout << dq[i] << " ";
            }
            kamoon = pq2.top().second;
            pq2.pop();
        }

        cout << endl;

        

       

    }


    return 0;

}
