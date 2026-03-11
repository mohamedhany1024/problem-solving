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
        int n, k;
        cin >> n >> k;
        ivec v1;
        ivec v2;
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            v1.push_back(x);
        }

        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            v2.push_back(x);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<int>());
        int i = 0;
        while(k>0 && i < n) {
            if (v2[i] > v1[i]) {
                v1[i] = v2[i];
                k--;
            }
            i++;
        }
        ll sum = 0;
        for(int i=0; i<n; i++) {
            sum+=v1[i];
        }

        cout << sum << endl;

    }


    return 0;

}
