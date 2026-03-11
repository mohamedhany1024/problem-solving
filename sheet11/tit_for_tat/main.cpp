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
        FORN {
            int x;
            cin >> x;
            v1.push_back(x);
        } 

        int pointer = 0;
        while ( k != 0) {
            if (pointer >= n-1) {
                break;
            }
            if (v1[pointer] >= k) {
                v1[pointer] -= k;
                v1[n-1] +=k;
                k=0;
            } else if (v1[pointer] < k) {
                v1[n-1] += v1[pointer];
                k-=v1[pointer];
                v1[pointer] = 0;
                pointer++;
                
            }
        }

        FORN {
            cout << v1[i] << " ";
        }
        cout << endl;
    }


    return 0;

}
