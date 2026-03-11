#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin >> t; while(t--)
#define FORN for(int i=0; i<n; i++)
#define ivec vector<int>
#define svec vector<string>

using namespace std;

deque <int> dq;
int main() {
    //fio
    
    int n, d;
    cin >> n >> d;

    //if (d > n) {
        d = d % n;
    //}
    FORN {
        int y;
        cin >> y;
        dq.push_back(y);
    }
    
    int x;
    for (int i=0; i<d; i++) {
        x = dq.front();
        dq.pop_front();
        dq.push_back(x);
    }

    FORN {
        cout << dq[i] << " ";
    }
    cout << endl;
    return 0;

}
