#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, R, S, B;
    cin >> N >> R >> S >> B;
    
    vector<int> groupA;
    vector<int> groupB; 
    
    for (int i = 0; i < N; i++){
        int a;
        cin >> a;
        if (a < R)
            groupA.push_back(a);
        else
            groupB.push_back(a);
    }
    

    sort(groupA.begin(), groupA.end(), greater<int>());
    
    
    int staminaUsed = min((int)groupA.size(), S);
    int clearedByStamina = staminaUsed;
    
    vector<int> costs;
    for (int i = staminaUsed; i < groupA.size(); i++){
        costs.push_back(groupA[i]);
    }
   
    for (int cost : groupB){
        costs.push_back(cost);
    }
    

    sort(costs.begin(), costs.end());
    
    int clearedByBudget = 0;
    for (int cost : costs){
        if (B >= cost){
            B -= cost;
            clearedByBudget++;
        } else {
            break;
        }
    }
    
    int totalCleared = clearedByStamina + clearedByBudget;
    cout << totalCleared << "\n";
    
    return 0;
}
