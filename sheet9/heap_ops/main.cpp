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
    priority_queue <int, vector<int>, greater<int>> pq;
    vector <string> v1;
    TC {
        string s;
        int x;
        cin >> s;
        if (s == "insert") {
            cin >> x;
            //cout << x << endl;
            pq.push(x);
            v1.push_back("insert " + to_string(x));
        } else if (s == "getMin") {
            cin >> x;
            if (pq.empty()) {
                pq.push(x);
                v1.push_back("insert " + to_string(x));
                v1.push_back("getMin " + to_string(x));

            } else if (pq.top() != x) {
                while(pq.top() < x && !pq.empty()) {
                    pq.pop();
                    v1.push_back("removeMin");
                }
                
                if (pq.top() != x) {
                    pq.push(x);

                
                    v1.push_back("insert " + to_string(x));
                    v1.push_back("getMin " + to_string(x));
                } else {
                    //pq.push(x);
                    v1.push_back("getMin " + to_string(x));
                }
            } else {
                v1.push_back("getMin " + to_string(x));
            }

        } else if (s == "removeMin") {
            if (pq.empty()) {
                pq.push((int)-2e5);
                pq.pop();

                v1.push_back("insert " + to_string((int)-2e5));
                v1.push_back("removeMin");

            } else {
                pq.pop();
                v1.push_back("removeMin");

            }
        }
        //cout << s << endl;
    }
    cout << v1.size() << endl;
    for(int i=0; i<v1.size(); i++) {
        cout << v1[i] << endl;
    }


    return 0;

}
