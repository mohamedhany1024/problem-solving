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
        int n, q;
        cin >> n >> q;
        ivec v1;
        FORN {
            int x; cin >> x;
            v1.push_back(x);

        }
        sort(v1.begin(), v1.end(), greater<int>());
        ivec preSum;
        preSum.push_back(v1[0]);

        for(int i=1; i<v1.size(); i++) {
            preSum.push_back(preSum[i-1] + v1[i]);
        }

        
        for(int i=0; i<q; i++) {
            int t;
            cin >> t;
            auto it = lower_bound(preSum.begin(), preSum.end(), t);
            if (it != preSum.end()) {
                cout << it - preSum.begin() + 1 << endl;
            } else {
                cout << -1 << endl;
            }
            /*ll watashi = 0;
            int j = 0;
            while(watashi < t && j<n) {
                watashi+=v1[j];
                j++;
            }
            if (watashi >= t) {
                cout << j << endl;
            } else {
                cout<< -1 << endl;
            }*/
        }

        
       


    }


    return 0;

}
