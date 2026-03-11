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

bool is_lucky(int n) {
    while (n!=0) {
        if (n % 10 != 7 && n % 10 != 4) {
            return false;
        }
        n/=10;
    }
    return true;
}   
int arr[100] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 744, 477, 747,774, 777};
bool brute_force(int n) {
    for(int i=0; i<14; i++) {
        if (n % arr[i] == 0) {
            return true;
        }
    }
    return false;
}

int get_num_len(int n) {
    int cnt = 0;
    while(n!=0) {
        n/=10;
        cnt++;
    }
    return cnt;
}


int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    int n;
    cin >>n;
    /*if (is_lucky(n)) {
        cout << "YES" << endl;
    } else {
        if (n % 4 != 0 && n % 7 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }*/
   cout << (brute_force(n) ? "YES" : "NO") << endl;
   //cout << (smart_sol(n) ? "YES" : "NO") << endl;


    return 0;

}
