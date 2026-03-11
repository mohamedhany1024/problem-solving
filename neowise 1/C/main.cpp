#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin >> t; while(t--)
#define FORN for(int i=0; i<n; i++)
#define FORM for(int j=0; j<m; j++)
#define ivec vector<int>
#define svec vector<string>
#define iimp map<int, int>
#define cimp map<char, int>
#define simp map<string, int>

using namespace std;

int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    int n;
    cin >> n;
    ivec v1;
    ivec v2;
    int x;
    ll sum2 = 0;
    ll sum3 = 0;
    FORN {
        
        cin >> x;
        sum2+=x;
        v1.push_back(x);
    }

    FORN {
        cin >> x;
        sum3+=x;
        v2.push_back(x);
    }
    ll sum1 = 0;
    FORN {
        sum1+=max(v1[i], v2[i]);
    }

    cout << sum1 << " " << sum2 << " " << sum3 << endl;
    
    
    return 0;

}
