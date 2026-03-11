    #include <iostream>
    #include <bits/stdc++.h>
    #define ll long long
    #define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #define TC int t; cin >> t; while(t--)
    #define FORN for(int i=0; i<n; i++)
    #define ivec vector<int>
    #define svec vector<string>

    using namespace std;

    int main() {
        fio
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b) {
            if (c == 0) {
                cout << "Aoki" << endl;
            } else {
                cout << "Takahashi" << endl;
            }
        } else {
            if (a > b) {
                cout << "Takahashi" << endl;
            } else {
                cout << "Aoki" << endl;
            }
        }
        
        return 0;

    }
