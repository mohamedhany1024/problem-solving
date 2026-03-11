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
    
    int q;
    double a_squared;
    cin >> q >> a_squared;
    while (q--) {
        //vector <pair<int, vector<int>>> v1;
        double X_0, Y_0, Z_0;
        cin >> X_0 >> Y_0 >> Z_0;
        double lambda1 = sqrt((X_0*X_0 + Y_0*Y_0 + Z_0*Z_0)/a_squared)+1;
        double lambda2 = -1.0*sqrt((X_0*X_0 + Y_0*Y_0 + Z_0*Z_0)/a_squared)+1;
        double x1 = -1.0*X_0 / (lambda1-1);
        double y1 = -1.0*Y_0 / (lambda1-1);
        double z1 = -1.0*Z_0 / (lambda1-1);

        double x2 = -1.0*X_0 / (lambda2-1);
        double y2 = -1.0*Y_0 / (lambda2-1);
        double z2 = -1.0*Z_0 / (lambda2-1);

        double d1 = pow(x1-X_0, 2) + pow(y1-Y_0, 2) + pow(z1-Z_0, 2);
        double d2 = pow(x2-X_0, 2) + pow(y2-Y_0, 2) + pow(z2-Z_0, 2);
        
        if (d1 < d2) {
            cout << setprecision(7) << x1 << " " << y1 << " " << z1 << endl;
            cout << setprecision(7) << ((x2 == 0) ? 0 : x2) << " " << ((y2 == 0) ? 0 : y2) << " " << ((z2 == 0) ? 0 : z2) << endl;
            
        } else if (d1 > d2) {
            cout << setprecision(7) << x2 << " " << y2 << " " << z2 << endl;
            cout << setprecision(7) << ((x1 == 0) ? 0 : x1) << " " << ((y1 == 0) ? 0 : y1) << " " << ((z1 == 0) ? 0 : z1) << endl;

        } else {
            cout << setprecision(7) << x1 << " " << y1 << " " << z1 << endl;
            cout << setprecision(7) << x2 << " " << y2 << " " << z2 << endl;
        }
    }
    


    return 0;

}
