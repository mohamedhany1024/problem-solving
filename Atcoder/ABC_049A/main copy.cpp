#include <iostream>

using namespace std;

int main() {
    char c;
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    cin >> c;

    for (int i=0; i<5; i++) {
        if (c==vowels[i]) {
            cout << "vowel" << endl;
            return 0;
        }
    }
    cout << "consonant" << endl;

    return 0;
}