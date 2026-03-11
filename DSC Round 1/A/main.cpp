#include <iostream>
#include <vector>
#include <bits/stdc++.h>
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
    map <int, int> zeroCnt;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        zeroCnt[i] = 0;
    }


    while (q--)
    {
        int person , act;
        cin >> person >> act;
        if(person == 1 && a[act-1] != -1)
        {
            if (a[act-1] == 0) {
                zeroCnt[act-1] +=1;
            }
            if (zeroCnt[act-1] == 2) {
                a[act-1] = -1;
            } else {
                a[act-1]--;
            }

            
        }
        
        else if(person == 0 &&a[act-1] != -1)
        {
            a[act-1]++;
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        cout << a[i] << " ";
    }
    
}