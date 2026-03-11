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
    vector <char> v1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    map <char, int> mp;
    for(int i=0; i<s.size(); i++) {
        mp[s[i]] = i;
    }
    char c;
    cin >> c;
    
    string s2;
    cin >> s2;
    int idx;
    for(int i=0; i<s2.size(); i++) {
        
        if (c == 'R') {
            idx = (mp[s2[i]]-1) % mp.size();

        } else if (c == 'L') {
            idx = (mp[s2[i]]+1) % mp.size();
        }
        cout << v1[idx];
    }
    cout << endl;
    return 0;

}
