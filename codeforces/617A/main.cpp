#include <iostream>

using namespace std;

int main() {
    int a, tempA;
    cin >> a;
    tempA = a;
    int steps = 0;

    while (tempA != 0) {
        
        if (tempA/5 != 0) {
            steps += tempA/5;
            tempA -= (tempA/5)*5;
        } else if (tempA/4 != 0) {
            steps += tempA/4;
            tempA -= (tempA/4)*4;
        } else if (tempA/3 != 0) {
            steps += tempA/3;
            tempA -= (tempA/3)*3;
        } else if (tempA/2 != 0) {
            steps += tempA/2;
            tempA -= (tempA/2)*2;
        }else if (tempA/1 != 0) {
            steps += tempA/1;
            tempA -= (tempA/1)*1;
        }

    }
    cout << steps << endl;
    return 0;
}