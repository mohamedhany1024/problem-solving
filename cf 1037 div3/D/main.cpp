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
        //vector <pair<int, int>> v1;
        map <pair<int, int>, int> realmp;
        int n, k;
        cin >> n >> k;

        FORN {
            int l, r, real;
            cin >> l >> r >> real;
            realmp[{l, r}] = real;
        }
        DBB {
            cout << "==========DEBUG===========" << endl;
        }
        for(auto& x:realmp) {

            DBB {
                cout << "<" << x.first.first << ", " << x.first.second << ">\n";
            }
            if (x.second > k && k <= x.first.second && k >= x.first.first) {
                k = x.second;
            }
        }

        DBB {
            cout << "==========END============" << endl;
        }
        DBB {
            cout << "ans is : " << endl;
        }
        cout << k << endl;


    }


    return 0;

}
