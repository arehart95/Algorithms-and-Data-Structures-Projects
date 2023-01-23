#include <bits/stdc++.h>
using namespace std;

// Figure out how many coins you need to make the inputted value. 

int changeMoney(int V) {
    int coins[] = {1, 5, 10, 25};
    int m = sizeof(coins)/sizeof(coins[0]);

    int wallet[V + 1];
    wallet[0] = 0; // base case

    for(int i = 1; i <= V; i++) {
        wallet[i] = INT_MAX;
    }

    for (int i = 1; i <= V; i++)
        for (int j = 0; j < m; j++)
            if (coins[j] <= i) {
                int sub_result = wallet[i - coins[j]];
                if (sub_result != INT_MAX && sub_result + 1 < wallet[i])
                    wallet[i] = sub_result + 1;
            }

    if (wallet[V] == INT_MAX)
        return -1;

    return wallet[V];
}

  int main() {

    int V{0};
    cin >> V;

    cout << changeMoney(V);

    return 0;
}
