#include <iostream>
#include <vector>
using namespace std;

long long fibonacci_fast(int n) {
    std::vector<long long> F {0, 1};

    if(n <= 1) {
        return n;
    }
    for (int i = 2; i <= n; i++) {
        F.push_back(F[i - 1] + F[i - 2]);
    }

    return F.back();
}

int main() {
    int n;
    cin >> n;


    cout << fibonacci_fast(n) << " " << std::endl;

  return 0;
}
