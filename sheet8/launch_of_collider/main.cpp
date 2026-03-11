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
    string s;
    cin >> s;
    int arr[2000005];
    priority_queue<int, vector<int>, greater<int>> pq;
    FORN {
        cin >> arr[i];
    }

    for(int i=0; i<s.size()-1; i++) {
        if (s[i] == 'R' && s[i+1] == 'L') {
            pq.push((arr[i+1] - arr[i])/2);
        }
    }
    if (!pq.empty()) {
        cout << pq.top() << endl;
    } else {
        cout << -1 << endl;
    }


    return 0;

}
