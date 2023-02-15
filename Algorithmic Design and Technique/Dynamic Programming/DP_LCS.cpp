#include <bits/stdc++.h>
using namespace std;

int subsequence(int *A, int *B, int n, int m) {

    int D[n+1][m+1];

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            if (i == 0 || j == 0)
                D[i][j] = 0;
            else if (A[i - 1] == B[j - 1])
                D[i][j] = D[i - 1][j - 1] + 1;
            else
                D[i][j] = max(D[i - 1][j], D[i][j - 1]);
        }
    }
    return D[n][m];
}

int main() {

    int n, m;
 
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++)
        cin >> A[i];

    cin >> m;
    int B[m];
    for(int j = 0; j < m; j++)
        cin >> B[j];

   cout << subsequence(A, B, sizeof(A)/sizeof(A[0]), sizeof(B)/sizeof(B[0]));

}
