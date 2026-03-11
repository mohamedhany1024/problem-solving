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
    
    fio
    stack <string> st;
    TC {
        int q;
        string x;
        
        cin >> q;
        if (q == 1) {
            cin >> x;
            st.push(x);

        } else if (q == 2) {
            if(!st.empty()) {
                st.pop();
            }

        } else if (q == 3) {
            if(!st.empty()) {
                cout << st.top() << '\n';
            } else {
                cout << "Empty!" << '\n';
            }
        }
    }


    return 0;

}
