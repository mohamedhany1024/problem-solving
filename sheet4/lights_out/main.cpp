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

void toggle(int (&arr)[3][3], int i, int j) {
    if (arr[i][j] == 1) {
        arr[i][j] = 0;
    } else {
        arr[i][j] = 1;
    }
}
void simulate(int (&arr)[3][3], int i, int j) {
    toggle(arr, i, j);
    if (j+1 <3) {
        toggle(arr, i, j+1);
    }
    if (j-1 >= 0) {
        toggle(arr, i, j-1);
    }
    if (i+1 < 3) {
        toggle(arr, i+1, j);
    }

    if(i-1 >= 0) {
        toggle(arr, i-1, j);
    }
}
int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    int arr[3][3] = {1};
    int input[3][3] = {0};
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            arr[i][j] = 1;
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin >> input[i][j];
            for(int l = 0; l<input[i][j]; l++) {
                simulate(arr, i, j);
            }
        }
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }



    return 0;

}
