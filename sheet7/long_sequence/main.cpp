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
    ll arr[100005];
    ll n;
    cin >> n;
    ll sum1 = 0;
    FORN {
        cin >> arr[i];
        sum1+=arr[i];
    }

    ll big;
    cin >> big;

    ll reps = big/sum1;
    
    ll idx = reps*n;
    ll sum2 = reps*sum1;
    
        for(int i=0; i<n; i++) {
            if (sum2+arr[i]>big) {
                sum2+=arr[i];
                idx++;
                break;
            }
    
            sum2+=arr[i];
            idx++;
        }
    
    cout << idx << endl;
    

    return 0;

}
