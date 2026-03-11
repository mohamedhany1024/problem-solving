#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
6 6
2 1 1 0 2 3
1 4
1 3
1 4
0 3
1 3
1 3
*/

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    unordered_map<int, bool> isBugged;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        isBugged[a[i]] = 1;
    }

    while (q--)
    {
        int person, act;
        cin >> person >> act;
        if (person == 1 && a[act - 1] != -1)
        {
            cout << "LAMP " << act << " IS " << isBugged[act-1] << endl;
            if (a[act - 1] > 0)
            {
                a[act - 1]--;
            }
            else if (a[act - 1] == 0 && isBugged[a[act - 1]] == 1)
            {
                isBugged[a[act - 1]] = 0;
            }
            else if (a[act - 1] == 0 && isBugged[a[act - 1]] != 1)
            {
                cout << "LAMP IS ZERO: " << act << endl;
                a[act - 1] = -1;
            }
        }

        else if (person == 0 && a[act - 1] != -1)
        {
            if (isBugged[act-1] != 1) {
                isBugged[act-1] = 1;
            } else {
                a[act - 1]++;
            }
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}