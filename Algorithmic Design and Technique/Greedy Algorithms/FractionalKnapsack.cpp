#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value, weight;

    Item(){}
    Item(int value, int weight) : value(value), weight(weight)
    {

    }

};

bool cmp(struct Item a, struct Item b) {
    double r1;
    r1 = (double) a.value / a.weight;
    double r2;
    r2 = (double) b.value / b.weight;

    return r1 > r2;
}

double Knapsack(struct Item arr[], int W, int size) {
    sort(arr, arr + size, cmp);

    int currWeight{0};
    double finalValue{0.0};

    for(int i = 0; i < size; i++) {
        if (currWeight + arr[i].weight <= W) {
            currWeight += arr[i].weight;
            finalValue += arr[i].value;
        } else {
            int remains = W - currWeight; // W is capacity of knapsack
            finalValue += arr[i].value * ((double)remains / arr[i].weight);
            break;
        }

    }

    return finalValue;

}


int main() {

    int W{0}; // weight of knapsack
    int n{0}; // size of array

    cout << "Enter the number of items followed by the weight of the knapsack: \n";
    cin >> n >> W;
    Item arr[n]; // n items of struct

    cout << "Enter the value and weight of each item.\n"
            "You can use one line for each value-weight pair.\n";

    for(int i = 0; i < n; i++)
        cin >> arr[i].value >> arr[i].weight;

    Item {
            {arr[n].value},
            {arr[n].weight}
    };

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << fixed;
    cout << setprecision(3);
    cout << "The maximum obtainable profit is: " << Knapsack(arr, W, size) << ", rounded to the nearest thousandth.";

    return 0;
}
