#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    bool p, n_p, found = false;

    for (int i = 2; i <= n/2; i++) {

        p = isPrime(i);

        n_p = isPrime(n-i);

        if(p && n_p) {
            found = true;
            break;
        }
    }

    if(found) {
            cout << "Yes! can be expressed as sum of primes";
    } else {
        cout << "Nope.";
    }

    return 0;
}