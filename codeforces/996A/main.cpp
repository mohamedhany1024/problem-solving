#include <iostream>

using namespace std;

int main() {
    int a, tempA;
    cin >> a;
    tempA = a;
    int bills = 0;

    while (tempA != 0) {
        if (tempA/100 != 0) {
            bills += tempA/100;
            tempA -= (tempA/100)*100;
        } else if (tempA/20 != 0) {
            bills += tempA/20;
            tempA -= (tempA/20)*20;
        } else if (tempA/10 != 0) {
            bills += tempA/10;
            tempA -= (tempA/10)*10;
        } else if (tempA/5 != 0) {
            bills += tempA/5;
            tempA -= (tempA/5)*5;
        } else if (tempA/1 != 0) {
            bills += tempA/1;
            tempA -= (tempA/1)*1;
        }

    }
    cout << bills << endl;
    return 0;
}