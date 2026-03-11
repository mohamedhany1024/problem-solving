    #include <iostream>
   
    #include <bits/stdc++.h>
    using namespace std;

    /*
    1 , 1 , 3 , 4 , 5 , 7
    */

    int main()
    {
        long long N, R, S, B;
        cin >> N >> R >> S >> B;

        vector<int> gates(N);
        vector <int> staminaGates;
        vector <int> baughtGates;
        for (int i = 0; i < N; i++)
        {
            cin >> gates[i];
            if (gates[i] > R) {
                staminaGates.push_back(gates[i]);

            } else {
                baughtGates.push_back(gates[i]);
            }
        }

        //sort(gates.begin(), gates.end());

        sort(staminaGates.begin(), staminaGates.end(), greater<int>);
        sort(baughtGates.begin(), baughtGates.end(), greater<int>);
        int openedGates = 0;
        

       



        cout << openedGates << endl;
    }