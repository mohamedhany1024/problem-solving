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
        int n;
        cin >> n;

        vector <int> four_multiples;

        for(int i=0; i<100; i++) {
            four_multiples.push_back(4*i);
        }
        bool flag = true;
        bool alice = false;

        map <int, int> mp;

        for(int i=0; i<n; i++) {
            mp[i] = 1;
        }
        int aliceIdx = -1;
        int bobIdx = -1;
        int nCpy = n-1;
        int turn = 0;
        while (nCpy > 0 && !alice) {
                for(int i=0; i<n; i++) {
                
                    for(int j=0; j<n; j++) {
                        if (i!=j && mp[i] != 0 && mp[j] != 0) {
                            DBB {
                                cout << "trying: " << i << ", " << j << endl;
                                cout << "with result = " << (i+j-3) % 4 << endl;
                            }
                            if ((i+j-3) % 4 == 0 && turn % 2 == 1) {
                                flag = false;
                                bobIdx = j;
                                aliceIdx = i;
                                break;
                            }
                        }
        
                    }
                    if (flag) {
                        alice = true;
                        //aliceIdx = i;
                        //mp[i] = 0;
                        break;
                    } else {
                        flag = true;
                        mp[bobIdx] = 0;
                        mp[aliceIdx] = 0;
                        nCpy-=2;
                    }
        
                }
        
                if (alice) {
                    cout << "Alice" << endl;
                } else {
                    cout << "Bob" << endl;
                }
    
            }
        }
        

    return 0;

}
