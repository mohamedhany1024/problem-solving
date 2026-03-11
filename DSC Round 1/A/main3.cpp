#include <iostream>
#include <cmath> 
#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int n, q;
    cin >> n >> q;
    int arr[100005];
    map<int, int> power;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        power[i] = 1;
    }
    int person, target;
    while (q--) {
        cin >> person >> target;
        if (person == 1 && arr[target-1] != -1) {
            if (arr[target-1] > 0) {
                arr[target-1]--;
            } else if (arr[target-1] == 0) {
                if (power[target-1] == 1) {
                    power[target-1] = 0;
                } else {
                    arr[target-1] = -1;
                }
            }
        } else if (person == 0 && arr[target-1] != -1) {
            if (arr[target-1] > 0) {
                arr[target-1]++;
            } else if (arr[target-1] == 0) {
                if (power[target-1] == 0) {
                    power[target-1] = 1;
                } else {
                    arr[target-1]++;
                }
            }
        }
    }

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
