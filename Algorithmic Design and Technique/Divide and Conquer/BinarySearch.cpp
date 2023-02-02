#include <bits/stdc++.h>
using namespace std;


long long int binarySearch(vector<long long int> A, int low, int high, long long int key) {


    do {
        long long int mid = floor(low + (high - low) / 2);
        if(key == A[mid]) {
            return mid;
        } else if (key < A[mid]) {
            high = mid - 1;
        } else
            low = mid + 1;

    } while(low <= high);

    return -1;
}

int main() {
    int n, k;
    cin >> n;

    vector<long long int> arr(n);
    for(size_t i = 0; i < arr.size(); i++)
        cin >> arr[i];

    stable_sort(arr.begin(), arr.end());

    cin >> k;
    vector<long long int> key(k);
    for(size_t i = 0; i < k; ++i) {
        cin >> key[i];
    }

    // low = 0 and high = n - 1
    for (int i = 0; i < key.size(); i++) {
        cout << binarySearch(arr, 0, n - 1, key[i]) << " ";
    }
    return 0;

}
