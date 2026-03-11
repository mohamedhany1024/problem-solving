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

bool is_pure(string s) {
   
    for(int i=0; i<s.size(); i++) {
        if (s[i] != s[0]) {
            return false;
        }
    }
    return true;
}

ll longest_cont_len(string s) {
    bool cont_subseq = false;
    ll max_len = -1e18;
    ll current_len = 1;

    for(int i=0; i<s.size()-1; i++) {
        if (!cont_subseq && s[i] == s[i+1]) {
            cont_subseq = true;
        }
        if (cont_subseq && s[i] == s[i+1]) {
            current_len++;
        }
        if (s[i] != s[i+1]) {
            cont_subseq = false;
            max_len = max(current_len, max_len);
            current_len = 1;
        }
        


    }

    max_len = max(current_len, max_len);

    DBB {
        cout << "longest subseq ever is: " << max_len << endl;
    }
    return max_len;
}

ll seperated_seq_len(string s) {
    ll first_subseq_len = 0;
    ll max_second_subseq_len = 0;
    ll current_subseq_len = 0;
    bool flag = false;
    ll last_idx = 0;
    for(int i=0; i<s.size(); i++) {

        if (s[i] == s[0]) {
            first_subseq_len++;
        }
        if (s[i] != s[0]) {
            last_idx = i;
            break;
        }
    }

    DBB {
        cout << "first subseq len is: " << first_subseq_len << endl;
    }
    flag = false;

    for(int i=last_idx; i<s.size(); i++) {

        if (s[i] == s[0]) {
            current_subseq_len++;
        }

        if (s[i] != s[0]) {
            max_second_subseq_len = max(max_second_subseq_len, current_subseq_len);
            current_subseq_len = 0;
        }

        /*if (s[i] == s[0] && s[i] == s[i+1]) {
            current_subseq_len++;
        } else if (s[i] != s[0]) {
            max_second_subseq_len = max(max_second_subseq_len, current_subseq_len);
            current_subseq_len = 0;
        
        }*/
    }
    max_second_subseq_len = max(max_second_subseq_len, current_subseq_len);

    DBB {
        cout << "longest second subseq of same type of first len is: " << max_second_subseq_len << endl;
    }

    ll ans = max_second_subseq_len+first_subseq_len;
    return ans;

}
int main() {
    #ifdef HELL_JUDGE
        freopen("input","r",stdin);
        freopen("output","w",stdout);
        freopen("error","w",stderr);
    #endif
    fio
    TC {
        int n;
        cin >> n;

        string s;
        cin >> s;
        ll ans1 = longest_cont_len(s);
        ll ans2 = seperated_seq_len(s);
        bool purity = is_pure(s);
        if (purity) {
            cout << s.size() << endl;
        } else {
            cout << max(ans1, ans2) << endl;
        }
        
    }

    return 0;

}
