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
int calc_moves(int a, int idx, int n) {
    if (a == idx+1) {
        return 0;
    } else {
        if (a > (idx+1)) {
            return idx +1;
        } else {
            return idx;
        }
    }
    //return (idx - 0) + (n-a);
}
int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    //fio
   
    TC {
        int n;
        cin >> n;
        ivec v1;
        ivec ans;
        map <int, int> idx;
        FORN {
            int x;
            cin >> x;
            v1.push_back(x);
            idx[x] = i;
        }

        for(int i=n; i>=1; i--) {
            int moves = calc_moves(i, idx[i], n);
            ans.push_back(moves);
            for(int j=1; j<=i; j++) {
                idx[j]-=moves;
                if (idx[j] < 0) {
                    idx[j]+= i;
                }
            }
        }

        for(int i=ans.size()-1; i>=0; i--) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }


    return 0;

}
