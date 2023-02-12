#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll fib_bottom(ll n) {
    if (n == 1 || n == 2)
        return 1;

    vector<ll> bottom(n + 1);
    bottom[0] = 0;
    bottom[1] = 1;
    bottom[2] = 1;

    for(int i = 3; i < n + 1; i++) {
        bottom[i] = bottom[i - 1] + bottom[i - 2];
    }

    return bottom[n];

}

int main() {
    int n;
    cin >> n;

    cout << fib_bottom(n);
}
