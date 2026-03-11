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
        int wl = 1;
        int t = 0;
        int budget;
        vector <int> v1;
        int n, k;
        cin >> n >> k;
        
        
        
        FORN {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        int start = v1[k-1];
        budget = abs(wl-start)+1;

        sort(v1.begin(), v1.end());

        int omak;
        for (int i=0; i< v1.size(); i++) {
            if (v1[i] == start) {
                omak = i;
                break;
            }
        }

        int current = start;
        bool flag = true;
        for(int i=0; i<v1.size(); i++) {
            budget = abs(wl-current)+1;
            if (abs(v1[i] - current) <= budget) {
                if (v1[i] - current <= 0) {
                    continue;
                }
                wl+= abs(v1[i] - current);
                current = v1[i];

            } else {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "Yes" << endl;
        } else {
            cout << "NO" << endl;
        }



    }


    return 0;

}
