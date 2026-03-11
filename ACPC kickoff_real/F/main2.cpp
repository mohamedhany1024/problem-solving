#include <iostream>
#include <vector>
#include <unordered_set>
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
bool debug = false;

const int MAXN = 100005; 
vector<int> primes;
vector<bool> is_prime(MAXN, true);


void seive() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < MAXN; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j < MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

// Factor a number into primes
vector<int> factorize(int x) {
    vector<int> factors;
    for (int p : primes) {
        if (1LL * p * p > x) break;
        if (x % p == 0) {
            factors.push_back(p);
            while (x % p == 0) {
                x /= p;
            }
        }
    }
    if (x > 1) {
        factors.push_back(x);
    }
    return factors;
}

int main() {
    #ifdef HELL_JUDGE
        freopen("input", "r", stdin);
        freopen("output", "w", stdout);
        freopen("error", "w", stderr);
    #endif
    fio

    seive(); // Generate primes before anything

    int n;
    cin >> n;
    ivec v(n);
    FORN {
        cin >> v[i];
    }

    unordered_set<int> group1_primes, group2_primes;
    ivec ans;

    FORN {
        int x = v[i];
        vector<int> factors = factorize(x);

        bool can_place_in_group1 = true, can_place_in_group2 = true;
        for (int f : factors) {
            if (group1_primes.count(f)) can_place_in_group1 = false;
            if (group2_primes.count(f)) can_place_in_group2 = false;
        }

        if (can_place_in_group1) {
            ans.push_back(1);
            for (int f : factors) {
                group1_primes.insert(f);
            }
        } else if (can_place_in_group2) {
            ans.push_back(2);
            for (int f : factors) {
                group2_primes.insert(f);
            }
        } else {
            cout << -1 << endl;
            return 0;
        }
    }

    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
