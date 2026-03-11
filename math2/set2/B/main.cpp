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

#define PI 3.141592654

using namespace std;
bool debug = false;

double sec(double x) {
    return 1/cos(x);
}

double I1 (double x) {
    return log(abs(sec(x)+tan(x)));
}

double I2 (double x) {
    return tan(x);
}


double I(int n, double limit) {
    if (n == 1) {
        return I1(limit);
    } else if (n == 2) {
        return I2(limit);
    } else if (n == 0) {
        return limit;
    }

    double t1 = pow(sec(limit), n-2)*tan(limit);
    //double t2 = (n-2)*(I(n-2, limit));

    return (t1+((n-2)*I(n-2, limit)))/(n-1);
}

int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    //fio
    TC {
        int n;
        cin >> n;

        double a = I(n, PI/4.0);
        double b = I(n, 0);

        cout  << setprecision(7) << a-b << endl;
    }



    return 0;

}
