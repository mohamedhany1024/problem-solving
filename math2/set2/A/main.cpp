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

const double ec = exp(1.0);
bool debug = false;
int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    double N_0, a, b;
    
    //cout << c_prime << endl;
    cin >> N_0 >> a >> b;
    double c_prime = N_0/(a-(N_0*b));
    int q;
    cin >> q;
    while(q--) {
        double qi;
        cin >> qi;
        double N = a*c_prime*pow(ec, a*qi)/(1+b*c_prime*pow(ec, a*qi));
        cout << setprecision(7)<< N << endl;
    }


    return 0;

}
