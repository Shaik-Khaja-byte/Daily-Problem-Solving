#include <bits/stdc++.h>
using namespace std;

/*
proper divisors' sum > input number
*/

int main() {
    int n{}, div{};
    cin >> n;

    for (int i = 1; i < n;i++) { // loop starts from 1
        if(n % i == 0) {
            div += i;
        }
    }

    if (div > n) {
        cout << "Abundant number";
    } else {
        cout << "Not Abundant";
    }

    return 0;
}