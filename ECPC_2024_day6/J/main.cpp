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
    int n, h, b;
    cin >> n >> h >> b;
    int cnt = 0;
    int ch = h+b;
    int hi, a;
    FORN {
        cin >> hi >> a;
        if (a == 1) {
            if (b>0) {
                b-=1;
                if (hi > b) {
                    hi-=b;
                    b=0;

                    if (hi<=h-1) {
                        cnt++;
                        h-=hi;
                    } else {
                        break;
                    }
                } else {
                    cnt++;
                    b-=hi;
                }
            } else {
                break;
            }
        } else {
            
        }
    }

    cout << cnt << endl;


    return 0;

}
