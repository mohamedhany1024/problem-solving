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
        map <int, int> ans;
        int n;
        cin >> n;
        vector <int> v1;
        vector <int> v2;
        vector <int> prefixMin;
        vector <int> suffixMax;
        vector <int> suffixMin;
        int maxNum = -1e9;
        int minNum = 1e9;

        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            v1.push_back(x);
            v2.push_back(x);
            minNum = min(minNum, x);
            prefixMin.push_back(minNum);
        }
        minNum = 1e9;
        for(int i=v1.size()-1; i>=0; i--) {
            maxNum = max(maxNum, v1[i]);
            minNum = min(minNum, v1[i]);
            suffixMax.push_back(maxNum);
            suffixMin.push_back(minNum);
        }

        ans[v1[0]] = 1;
        ans[v1[n-1]] = 1;
        //sort(v1.begin(), v1.end());
        for(int i=1; i<v1.size()-1; i++) {
            if (prefixMin[i] == v1[i]) {
                /*if (suffixMax[n-1-i] == v1[i] || suffixMin[n-1-i] == v1[i]) {
                    ans[v1[i]] = 1;   
                }*/
               ans[v1[i]] = 1;
                
            } else if (v1[i] == minNum || v1[i] == maxNum) {
                ans[v1[i]] = 1;
            }
            
        }

        for(int i=0; i<v1.size(); i++) {
            cout << ans[v1[i]];
        }
        cout << endl;

    }


    return 0;

}
