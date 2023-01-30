#include <bits/stdc++.h>
using namespace std;


vector<int> maxNumPrizes( int n, vector<int> result ) {
    for( int i{1}; i+1 <= n-i; n-=i, ++i )
            result.push_back(i);
        if( 0 < n )
            result.push_back(n);
        return result;
}

int main() {

    int n {0};
    cin >> n;

    auto result = maxNumPrizes(n);
    cout << result.size() << endl;
    copy( result.begin(), result.end(), ostream_iterator< int >( cout, " " ));
    cout << endl;

    return 0;
}
