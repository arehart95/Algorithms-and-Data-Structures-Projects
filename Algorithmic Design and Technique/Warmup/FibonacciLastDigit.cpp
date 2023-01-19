#include <iostream>
using std::cout;
using std::cin;
using std::endl;

using ll = long long int;

//  I learned that Fibonacci numbers repeat after every 60 digits which I hadn't known before!


ll getFibonacci(ll F[], ll n) {

    F[0] = 0;
    F[1] = 1;

    for (ll i = 2; i <= n; i++)
        F[i] = (F[i - 1] + F[i - 2]) % 10;

    return F[n];
}

int findLastDigit(int n) {
    ll F[60] = {0};

    getFibonacci(F, 60);

    return F[n % 60];
}


int main () {
    ll n = 0;

    cin >> n;
    cout << findLastDigit(n) << endl;

    return 0;
}
