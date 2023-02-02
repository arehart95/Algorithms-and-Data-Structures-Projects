#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &A, int low, int high, int key) {


    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (A[mid] == key) {
            return mid;
        } else if (A[mid] > key) {
            return binarySearch(A, low, mid - 1, key);
        } else
            return binarySearch(A, mid + 1, high, key);

    }
    return -1;
}

int main() {
    int n, k;
    cin >> n;
    vector<int> arr(n);

    for(size_t i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    cin >> k;
    cout << binarySearch(arr, 0, n-1, k);

}
