#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int q;
    cin >> q;
    cin.ignore();
    deque<string> dq;
    int opHistortyCnt = 0;
    string s = "";
    string qq;
    int opCode = -1;
    
    for(int r=0; r<q; r++) {
        
        getline(cin, qq);
        opCode = qq[0] - '0';
        
        if (opCode == 1) {
            //string W = "";
            for(int i=2; i<qq.size(); i++) {
                s+=qq[i];
            }
            dq.push_back(s);
        } else if (opCode == 2) {
            qq.erase(0, 2);
            int k = stoi(qq);
            for(int i=0; i<k; i++) {
                if(!s.empty()) {
                    s.pop_back();
                }
            }
            dq.push_back(s);
        } else if (opCode == 3) {
            qq.erase(0, 2);
            int k = stoi(qq);
            cout << (s[k-1]) << endl;
            //dq.push_back(s);
        } else if (opCode == 4) {
            if (dq.size() > 1) {
                dq.pop_back();
                s = dq.back();
            } else if (dq.size() == 1) {
                dq.pop_back();
                s="";
            }
        }
        opHistortyCnt++;
        /*if (opHistortyCnt > 10) {
            dq.pop_front();
            opHistortyCnt = 0;
        }*/
        
    }
    return 0;
}
