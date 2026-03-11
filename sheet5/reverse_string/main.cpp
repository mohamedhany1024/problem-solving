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
    TC {
        string s1, s2, temp;
        cin >> s1;
        cin >> s2;
        temp = "";
        int right_substr_idx;
        bool flag = true;
        int find_res;
        int i =0;
        ivec occ;
        for(int j=0; j<s1.size(); j++) {
            if (s1[j] == s2[0]) {
                occ.push_back(j);
            }
        }
        bool flag2 = false;
       // for(int k=0; k<occ.size(); k++) {
            //i = occ[k];
            while (flag) {
                temp+=s2[i];
                find_res = s1.find(temp);
                if (find_res != string::npos) {
                    right_substr_idx = find_res;
                } else {
                    flag = false;
                    temp.pop_back();
                    break;
                }
                i++;
                int right_substr_end = right_substr_idx+temp.size()-1;
                
                string temp2 = temp;
                for(int j = right_substr_end-1; temp2.size()<s2.size(); j--) {
                    temp2+=s1[j];
                    
                }
        
                if (s2.compare(temp2) == 0) {
                    //cout << "YES" << endl;
                    flag2 = true;
                    break;
                }
            }
            int right_substr_end = right_substr_idx+temp.size()-1;
            int cnt = 0;
            int tsz = temp.size();
            for(int j = right_substr_end-1; temp.size()<s2.size(); j--) {
                temp+=s1[j];
                cnt++;
            }
    
            if (s2.compare(temp) == 0) {
                //cout << "YES" << endl;
                flag2 = true;
            }
        //}

        for(int k = 0; k<occ.size(); k++) {
            temp="";
            for(int j = occ[k]; temp.size()< s2.size(); j--) {
                temp+=s1[j];
            }

            if (s2.compare(temp) == 0) {
                //cout << "YES" << endl;
                flag2 = true;
            }

        }
        if (flag2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }

    

    return 0;

}
