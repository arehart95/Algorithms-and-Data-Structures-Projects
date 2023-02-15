#include <bits/stdc++.h>
using namespace std;

int subsequence(int *A, int *B, int *C int n, int m, int o) {

    int D[n+1][m+1][o+1];

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
          for(int k = 0; k <= o; k++) {
			  
            if (i == 0 || j == 0 || k == 0)
                D[i][j][k] = 0;
			  
            else if (A[i - 1] == B[j - 1] && A[i - 1] == C[k - 1])
                D[i][j][k] = D[i - 1][j - 1][k - 1] + 1;
			  
            else
                D[i][j][k] = 1 + max({D[i - 1][j], D[i][j - 1], D[i][j][k-1]});
          }
       }
    }
    return D[n][m][o];
}

int main() {

    int n, m, o;
 
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++)
        cin >> A[i];

    cin >> m;
    int B[m];
    for(int j = 0; j < m; j++)
        cin >> B[j];
  
    cin >> o;
  	int C[o];
	for(int k = 0; k < o; k++)
		cin >> C[i];


   cout << subsequence(A, B, C, sizeof(A)/sizeof(A[0]), sizeof(B)/sizeof(B[0]), sizeof(C)/sizeof(C[0]));

}
