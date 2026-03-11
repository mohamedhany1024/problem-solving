#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream infile("in.txt", ios::in);
    string s;
    char blahaj[500];
    char c = 'a';
    while(!infile.eof()) {
        //infile >> s;
        //cout << s << endl;
        infile.getline(blahaj, 500);
        cout << blahaj << endl;
    }
    //infile.getline(blahaj, 10);
    infile.close();
    //cout << blahaj << '\n';

    return 0;
}
