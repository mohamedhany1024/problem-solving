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
        int arr[20005];
        FORN {
            cin >> arr[i];
        }

        bool flag = true;

        for(int i=0; i<n; i++) {
            if (arr[i] > k) {
                flag = false;
                break;
            }
        }

        if (!flag) {
            for(int i=0; i<n; i++) {
                for(int j = i; j<n; j++) {
                    if (arr[i] + arr[j] <= k && i!=j) {
                        flag = true;
                        break;
                    }
                }
            }
    
            if(flag) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;
        }
    }


    return 0;

}
