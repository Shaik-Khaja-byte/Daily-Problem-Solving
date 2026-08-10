#include <bits/stdc++.h>
using namespace std;

/*
input -> 6
numbers which divide 6 and are less than 6 -> (1, 2, 3)
1 + 2 + 3 = 6 (output)

if (input == output) -> perfect number
*/

int main() {
    int n;
    cin >> n;
    int sum{};

    for (int i = 1; i < n; i++){
        if (n % i == 0) {
            sum += i;
        }
    }

    if (n == sum) {
        cout << "Perfect Number";
    } else {
        cout << "not a perfect number";
    }

    return 0;
}