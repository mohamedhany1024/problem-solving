#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin >> t; while(t--)
#define FORN for(int i=0; i<n; i++)
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
    TC {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll high = n;
        ll low = 1;
        deque <int> dq;
        for (int i=n-2; i>=0; i--) {
            if (s[i] == '<') {
                dq.push_front(low);
                low++;
            } else if (s[i] == '>') {
                dq.push_front(high);
                high--;
            }

        }

        if (s[0] == '>') {
            dq.push_front(low);
            low++;
        } else {
            dq.push_front(high);
            high--;
        }

        for(int i=0; i<dq.size(); i++) {
            cout << dq[i] << " ";
        }
        cout << endl;
    }
    
    
    return 0;

}
