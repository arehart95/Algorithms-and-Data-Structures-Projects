#include <bits/stdc++.h>
using namespace std;

int EditDistance(string A, string B, int n, int m) {
    int i, j;

    int D[n+1][m+1];

    for(i = 0; i <= n; i++) {
        for(j = 0; j <= m; j++) {

            if (i == 0)
                D[i][j] = j;
            else if (j == 0)
                D[i][j] = i;
            else if (A[i-1] == B[j-1])
                D[i][j] = D[i-1][j-1];
            else
                D[i][j] = 1 + min({D[i][j-1], // insertion
                                   D[i-1][j], // deletion
                                   D[i-1][j-1]}); // mismatch
        }
    }
    return D[n][m];
}

int main() {

    string A, B;
    cin >> A;
    cin >> B;

    cout << EditDistance(A, B, A.length(), B.length());
}
