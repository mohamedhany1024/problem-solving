#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int x, y, a, b, c;
    int t;
    double z;
    cin >> t;
    
    while (t--) {
        cin >> x;
        if(x >= 0) {
            cout << x - 1 << " " << x - 2 << endl;
        } else {
            cout << x + 1 << " " << x + 2 << endl;
        }
        
    }
    return 0;
}
