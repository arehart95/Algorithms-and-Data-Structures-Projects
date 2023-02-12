#include <bits/stdc++.h>
using namespace std;

// Dynamic programming approach using USD coin denominations
// I suppose coins[] could be initialized with input from the user for another denomination 

int DPChange(int m, int V, int coins[]) {

   int coinTable[V + 1];

   coinTable[0] = 0;

   for(int i = 1; i <= V; i++) {
       coinTable[i] = INT_MAX;
   }

   for(int i  = 1; i <= V; i++) {
       for(int j = 0; j < m; j++) {
           if (coins[j] <= i) {
               int result = coinTable[i - coins[j]];
               if (result != INT_MAX && result + 1 < coinTable[i])
                   coinTable[i] = result + 1;
           }
       }
   }

    if (coinTable[V] == INT_MAX)
        return -1;

    return coinTable[V];
}



int main() {

    int coins[] = {1, 5, 10, 25}; // for USD, not including the half dollar
    int m = sizeof(coins) / sizeof(coins[0]);
    int V;
    cin >> V;

    cout << DPChange(m, V, coins);
}
