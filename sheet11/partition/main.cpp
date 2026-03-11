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
    ivec negatives;
    ivec positives;

    int n;
    cin >> n;
    ll positive_sum = 0;
    ll negative_sum = 0;
    FORN {
        int x;
        cin >> x;
        if (x >= 0) {
            positives.push_back(x);
            positive_sum+=x;
        } else {
            negatives.push_back(x);
            negative_sum+=x;
        }
    }

    if (negatives.size() != 0 && positives.size() != 0) {
        cout << positive_sum - negative_sum << endl;
    } else if (negatives.size() == 0 && positives.size() != 0){
        //sort(positives.begin(), positives.end());
        cout << positive_sum  << endl;
    } else if (negatives.size() != 0 && positives.size() == 0) {
        //sort(negatives.begin(), negatives.end());
        //cout << negatives[0] - (negative_sum+abs(negatives[0])) << endl;
        cout << abs(negative_sum) << endl;
    }



    return 0;

}
