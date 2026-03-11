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
    int arr[200005];
    FORN {
        cin >> arr[i];
    }
    int max_elem = arr[0];
    int min_elem = arr[0];
    int cnt = 0;

    for(int i=0; i<n; i++) {
        if (arr[i] > max_elem) {
            cnt++;
            max_elem = arr[i];
        } else if (arr[i] < min_elem) {
            cnt++;
            min_elem = arr[i];
        }
    }
    cout << cnt << endl;

    return 0;

}
