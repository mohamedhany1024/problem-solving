#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //sol1
    /*map <int, map<int, int>> mp;

    int n;
    cin >> n;

    vector <int> v;
    int loc;
    for (int i=0; i<n; i++) {
        cin >> loc;
        v.push_back(loc);
        mp[0][i] = loc;
    }

    int qcnt;
    cin >> qcnt;
    char q;
    int  x, y;
    int days = 0;
    while(qcnt--) {
        cin >> q >> x >> y;
        if (q == 'M') {
            mp[days+1] = mp[days];
            mp[days+1][x-1] = y;
            days++;

        } else if (q=='F') {
            cout << mp[y][x-1] << endl;
        }
    }*/

    //sol2

    map<int, map<int, int>> history;

    int n;
    cin >> n;

    vector <int> v;
    int loc;

    for (int i=0; i<n; i++) {
        cin >> loc;
        v.push_back(loc);
        history[i+1][0] = loc;
    }

    int qcnt;
    cin >> qcnt;
    char q;
    int  x, y;
    int days = 0;
    while(qcnt--) {
        cin >> q >> x >> y;
        if (q == 'M') {
            history[x][days+1] = y;
            days++;

        } else if (q=='F') {
            if (history[x][y] == 0) {
                cout << history[x][0] << endl;
            } else {
                cout << history[x][y] << endl;
            }
            
        }
    }

    return 0;
}