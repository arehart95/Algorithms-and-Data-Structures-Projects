#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

ll maxDotProduct(vector<ll> vector1, vector<ll> vector2, int K) {

    sort(vector1.begin(), vector1.end());
    sort(vector2.begin(), vector2.end());

    ll product{0};
    for(int i = 0; i < K; i++)
        product += (ll)vector1[i] * vector2[i];

    return product;
}


int main(){

    int i, K;
    cin >> K;
    vector<ll> vector1(K);
    vector<ll> vector2(K);

    for(i = 0; i < vector1.size(); i++)
        cin >> vector1[i];
    for(i = 0; i < vector2.size(); i++)
        cin >> vector2[i];

    cout << maxDotProduct(vector1, vector2, K);

    return 0;
}
