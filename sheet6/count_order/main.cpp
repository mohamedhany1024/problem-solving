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
bool are_equal(vector <int> v1, vector<int> v2) {
    for(int i=0; i<v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

bool is_a_bigger(vector<int> v1, vector<int>v2) {
    for(int i=0; i<v1.size(); i++) {
        if (v1[i] > v2[i]) {
            return true;
        } else if (v2[i] > v1[i]) {
            return false;
        }
    }
    return false;
}

void printv(vector<int> v) {
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    int n;
    cin >> n;
    ivec v1, v2;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    ll steps = 0;
    DBB {
        cout << ((is_a_bigger(v1, v2)) ? "a is bigger" : "b is bigger") << endl;
    }

    bool flafel_we_ta3meya = false;
    if (is_a_bigger(v1, v2)) {
        flafel_we_ta3meya = true;
    }
    while (!are_equal(v1, v2)) {
        if (!flafel_we_ta3meya) {
            next_permutation(v1.begin(), v1.end());
        } else {
            next_permutation(v2.begin(), v2.end());
        }
        DBB {
            //printv(v1)
            
        }
        steps++;
        
    }
    cout << steps << endl;
    


    return 0;

}
