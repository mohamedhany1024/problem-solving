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
bool debug = 1;


int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    TC {
        int n, k;
        cin >> n >> k;
        ivec v1;
        iimp mp;
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            v1.push_back(x);
            mp[x]++;

        }
        sort(v1.begin(), v1.end());
        int maxAns = -1e9;
        pair<int, int> ans;
        int start = v1[0];
        int end;
        int falses = 0;
        
        for(int i=0; i<v1.size(); i++) {
            if (mp[v1[i]] < k) {
                falses++;
                if (i+1 <= v1.size()-1) {
                    start = v1[i+1];
                } else {
                    start = v1[i];
                }
                continue;
            } else if (i-1 >= 0) {
                if (v1[i] - v1[i-1] > 1) {
                    falses++;
                    start = v1[i];
                }
            } 

            if (v1[i] - start > maxAns && v1[i] - start >= 0) {
                maxAns = v1[i] - start;
                ans = {start, v1[i]};
            }
        }
        if (falses >= v1.size()) {
            cout << -1 << '\n';
        } else {
            cout << ans.first << " " << ans.second << '\n';
        }

    }

    return 0;

}
