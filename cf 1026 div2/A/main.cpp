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
        int n;
        ivec v;
        ivec ans;
        cin >> n;
        FORN {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<n; i++) {
            for(int j=n-1; j>=0; j--) {
                if ((v[i] + v[j]) % 2 == 0) {
                    ans.push_back(i + n-1-j);
                }
            }
        }

        sort(ans.begin(), ans.end());
        cout << ans[0] << endl;


    }



    return 0;

}
