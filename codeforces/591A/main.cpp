#include <iostream>

using namespace std;

int main() {
    int l;
    int a;
    int b;
    
    cin >> l;
    cin >> a;
    cin >> b;
    int x1 = 0;
    int x2 = l;
    int collisions = 0;
    int direction1 = 1;
    int direction2 = 1;

    while(true) {

        x1+=(a*direction1);
        x2-=(b*direction2);

        if (x1==x2) {
            collisions++;
            direction1*=-1;
            direction2*=-1;
        }

        if (x1==0) {
            direction1*=-1;
        }

        if(x2==l) {
            direction2*=-1;
        }

        if (collisions == 2) {
            cout << "2nd COLLISION AT X = " << x1 << endl;
            return 0;
        }

    }
    return 0;
}