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
    ivec positives;
    ivec negatives;
    ivec zeros;
    FORN {
        int x;
        cin >> x;
        if (x > 0) {
            positives.push_back(x);
        } else if (x < 0) {
            negatives.push_back(x);
        } else {
            zeros.push_back(x);
        }
    }

    if(negatives.size() % 2 != 0) {
        cout << 1 << " " << negatives[0] << endl;
        cout << negatives.size()-1+positives.size() << " ";
        for(int i=1; i<negatives.size(); i++) {
            cout << negatives[i] << " ";
        }
        for(int i=0; i<positives.size(); i++) {
            cout << positives[i] << " ";
        }
        cout << endl;
        cout << zeros.size() << " ";
        for(int i=0; i<zeros.size(); i++) {
            cout << zeros[i] << " ";
        }
        cout << endl;
    } else {
        if (positives.size() != 0) {
            cout<< 1 << " " << negatives[0] << endl;
            cout << positives.size() << " ";
            for(int i=0; i<positives.size(); i++) {
                cout << positives[i] << " ";
            }
            cout << endl;
            cout << zeros.size()+negatives.size()-1 << " ";
            for(int i=0; i<zeros.size(); i++) {
                cout << zeros[i] << " ";
            }
            for(int i=1; i<negatives.size(); i++) {
                cout << negatives[i] << " ";
            }
            cout << endl;

        } else {
            cout << 1 << " " << negatives[0] << endl;
            cout << 2 << " " << negatives[1] << " " << negatives[2] << endl;
            cout << zeros.size() + negatives.size()-3 << " ";
            for(int i=0; i<zeros.size(); i++) {
                cout << zeros[i] << " ";
            }
            for(int i=3; i<negatives.size(); i++) {
                cout << negatives[i] << " ";
            }
            cout << endl;

        }
    }


    return 0;

}
