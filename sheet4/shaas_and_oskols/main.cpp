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
    int n;
    cin >> n;
    int freqArr[200005] = {0};
    FORN {
        cin >> freqArr[i+1];
    }

    int m;
    cin >> m;

    FORM {
        int y, x;
        cin >> x >> y;
        
        freqArr[x+1] += freqArr[x]-y;
        freqArr[x-1] += y-1;
        freqArr[x] = 0;

    }

    for(int i=1; i<=n; i++) {
        cout << freqArr[i] << endl;
    }



    return 0;

}
