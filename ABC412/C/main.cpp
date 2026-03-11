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

bool isGood(vector<int> &v) {
    for(int i=1; i<v.size(); i++) {
        if (v[i] <= v[i-1]*2){
            continue;
        } else {
            return false;
        }
    }
    return true;
}
int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    TC {
        int n;
        cin >> n;
        ivec v1;
        int min_num = 1e9;
        int max_num = -1e9;
        FORN {
            int x;
            cin >> x;
            v1.push_back(x);
            //min_num = min(min_num, x);
            //max_num = max(max_num, x);
        }
        min_num = v1[0];
        max_num = v1[n-1];
        sort(v1.begin(), v1.end());
        
        int current = min_num;
        int size = 2;
        bool flag = false;
        while(current*2 < max_num) {
            auto it = lower_bound(v1.begin(), v1.end(), 2*current);
            if (*it > 2*current) {
                if (it != v1.begin() && it != v1.end()) {
                    it--;
                    if(*it <= 2*current && *it != current) {
                        size++;
                        current = *it;
                    } else {
                        //cout << "womp womp" << '\n';
                        flag = true;
                        break;
                    }
                } else {
                    //cout << "womp womp" << '\n';
                    flag = true;
                    break;
                }
            } else {
                size++;
                current = *it;
            }
        }
        if (!flag) {
            cout << size << endl;
        } else {
            cout << -1 << endl;
        }
       
        
        


    }


    return 0;

}
