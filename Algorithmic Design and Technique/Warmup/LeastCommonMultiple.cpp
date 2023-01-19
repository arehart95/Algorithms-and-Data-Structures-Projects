#include <iostream>
using namespace std;
using ll = long long int;

ll euclidgcd(ll a, ll b) {
    if (a == 0)
        return b;

    return euclidgcd(b % a, a);
}

// a*b = lcm(a, b) * gcd(a, b)
ll lcm(ll a, ll b) {
    return (a / euclidgcd(a, b)) * b;
}

int main() {
    ll a, b;

    cin >> a;
    cin >> b;

    cout << lcm(a, b);

    return 0;
}
