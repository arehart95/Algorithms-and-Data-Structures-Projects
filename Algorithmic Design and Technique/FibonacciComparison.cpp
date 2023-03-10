#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

class Fibonacci {
public:
    Fibonacci() = default;

    void setDigit(int digit) {
        n = digit;
    }

    long long fibFast(int digit) {
        vector<long long> F {0, 1};
         if (digit <= 1) {
             return digit;
         }

        for (int i = 2; i <= digit; i++)
            F.push_back(F[i - 1] + F[i - 2]);

        return F.back();
    }

    long long fibSlow(int digit) {
        if (digit <= 1)
            return digit;
        else
            return fibSlow(digit - 1) + fibSlow(digit - 2);
    }

    void timeFibSlow() {
        auto startSlow = chrono::steady_clock::now();
        cout << "\nSlow algorithm of the " << n << "th Fibonacci number, " << fibSlow(n);
        auto endSlow = chrono::steady_clock::now();
        chrono::duration<double> timeSlow = endSlow - startSlow;
        cout << "\nTime elapsed: " << timeSlow.count() << " seconds" << endl;
    }

    void timeFibFast()  {
        auto startFast = chrono::steady_clock::now();
        cout << "\nFast algorithm of the " << n << "th Fibonacci number, " << fibFast(n);
        auto endFast = chrono::steady_clock::now();
        chrono::duration<double> timeFast = endFast - startFast;
        cout << "\nTime elapsed: " << timeFast.count() << " seconds" << endl;
    }

private:
    int n;
};

int main() {
    Fibonacci slow{};
    Fibonacci fast{};

    int n;
    cin >> n;
    fast.setDigit(n);
    slow.setDigit(n);

    fast.timeFibFast();
    slow.timeFibSlow();
  
    return 0;
}
