#include <iostream>
#include <vector>
using namespace std;

/* This is probably not an "ideal" Fibonacci algorithm. The assignment was to improve the naive
   algorithm provided, which was the typical
    int Fibonacci(int n) {
        if (n <= 1)
            return n;
        else
            return Fibnoacci(n - 1) + Fibonacci(n - 2);
    }
    
    I am using the vector template container suggested by both C++ 20 and 
    Data Structures and Algorithms in C++ textbooks.
*/

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
