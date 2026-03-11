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
        int hikeCnt = 0;
        int currentContDays = 0;
        bool fafa = true;
        bool rest = false;
        FORN {
            int x;
            cin >> x;
            if (rest) {
                rest = false;
                currentContDays = 0;
                continue;
            }
            
            if (fafa) {
                if (x == 0) {
                    currentContDays++;
                } else if (x == 1) {
                    currentContDays = 0;
                }
            }

            if (currentContDays == k) {
                hikeCnt++;
                rest = true;
            }

        }
        cout << hikeCnt << endl;
    }

    return 0;

}
