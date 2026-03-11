#include <iostream>

using namespace std;

int main() {
   int n;
   cin >> n;
   bool arr[10005][3] = {0};
    int global_cnt = 0;
    int local_cnt = 0;
   for(int i=0; i<n; i++) {
        local_cnt = 0;
        for(int j=0; j<3; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                local_cnt++;
            }
        }

        if (local_cnt >= 2) {
            global_cnt++;
        }

   }

    cout << global_cnt << endl;
    return 0;
}