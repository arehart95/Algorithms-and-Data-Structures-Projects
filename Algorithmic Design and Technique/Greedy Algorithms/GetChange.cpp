#include <iostream>
#include <climits>
using namespace std;

// Figure out how many coins you need to make the inputted value. 

int changeMoney(const int value) {
    constexpr int coins[] = {1, 5, 10, 25};
    constexpr int m = std::size(coins);

    int wallet[value + 1];
    wallet[0] = 0; // base case

    for(int i = 1; i <= value; i++) {
        wallet[i] = INT_MAX;
    }

    for (int i = 1; i <= value; i++)
        for (const int coin : coins)
            if (coin <= i) {
                if (const int sub_result = wallet[i - coin]; 
                        sub_result != INT_MAX && sub_result + 1 < wallet[i])
                    wallet[i] = sub_result + 1;
            }

    if (wallet[value] == INT_MAX)
        return -1;

    return wallet[value];
}

  int main() {

    int V{0};
    cout << "Please enter the amount of change: ";
    cin >> V;
    cout << "You need " << changeMoney(V) << " coins to make this amount.";

    return 0;
}
