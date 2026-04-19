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
        //fio
        TC {
            
            int n;
            cin >> n;
            ivec v;
            ivec freq(100005, 0);
            bool flag = false;
            FORN {
                int x;
                cin >> x;
                v.push_back(x);
                freq[x]++;
                if (freq[x] >= 2) {
                    flag = true;
                    //break;
                }
            }

            if (flag) {
                cout << -1 << endl;
            } else {
                //cout << v.size() << endl;
                sort(v.begin(), v.end(), greater<>());
                //cout << v.size() << endl;
                for(auto& x : v) {
                    cout << x << " ";
                }
                cout << endl;
            }
        }

        return 0;

    }
