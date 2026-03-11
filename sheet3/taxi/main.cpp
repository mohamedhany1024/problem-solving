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
        freopen("input", "r", stdin);
        freopen("output", "w", stdout);
        freopen("error", "w", stderr);
    #endif

    fio
    int n;
    cin >> n;
    ivec v(n);
    iimp m;

    FORN {
        cin >> v[i];
        m[v[i]]++;
    }

    ll t = 0;

 
    t += m[4];

    
    int pair = min(m[3], m[1]);
    t += pair;
    m[3] -= pair;
    m[1] -= pair;

    
    t += m[3];

   
    t += m[2] / 2;
    m[2] %= 2;

   
    if (m[2]) {
        t += 1;
        m[1] -= min(2, m[1]);
        m[2] = 0;
    }

    
    if (m[1] > 0) {
        t += (m[1] + 3) / 4;
    }

    cout << t << endl;
    return 0;
}
