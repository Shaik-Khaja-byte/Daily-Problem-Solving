#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{}, r{}, result{1}; // n -> people, r -> seats
    cin >> n >> r;

    for(int i = 0; i < r; i++) {
        result *= (n - i); // n!/(n-r)!
    }

    cout << result;

    return 0;
}