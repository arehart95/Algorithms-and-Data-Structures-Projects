#include <iostream>
using namespace std;
using ll = long long int;

ll euclidgcd(ll a, ll b) {
    if (a == 0)
        return b;

    return euclidgcd(b % a, a);
}

int main() {
    ll a, b;

    cin >> a;
    cin >> b;

    cout << lcm(a, b);

    return 0;
}
