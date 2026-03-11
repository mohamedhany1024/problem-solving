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

int loc_1 = 0;
int loc_2 = 0;

void locate_1(int arr[5][5], int n, int m) {

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if (arr[i][j] == 1) {
                loc_1 = i;
                loc_2 = j;
            }
        }
    }
}

int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    int n, m;
    n = 5;
    m = 5;
    int arr[5][5] = {0};

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    locate_1(arr, n, m);
    
    cout << abs(loc_1+1-3)+abs(loc_2+1-3) << endl;




    return 0;

}
