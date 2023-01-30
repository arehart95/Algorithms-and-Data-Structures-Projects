#include <bits/stdc++.h>
using namespace std;

int cmp(string A, string B) {
    string AB = A.append(B);

    string BA = B.append(A);

    return AB.compare(BA) > 0 ? 1 : 0;
}

void largestNumber(vector<string> nums) {
    sort(nums.begin(), nums.end(), cmp);
    for(size_t i = 0; i < nums.size(); i++)
        cout << nums[i];

}

int main() {
    int n;
    cin >> n;
    vector<string> nums(n);

    for (size_t i = 0; i < nums.size(); i++) {
        cin >> nums[i];
    }

    largestNumber(nums);

    return 0;
}
