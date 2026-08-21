#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n < 2)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    cout << "with the help of prime number calculation : " << endl;
    for (int i = 1; i <= n; i++) {
        if(n % i == 0 && isPrime(i)) { // finding if each i value is prime or not separately
            cout << i << " ";
        }
    }   
    cout << endl;

    // if you want to find the repeated prime factors as well
    cout << "with repeated factors : " << endl;
    for (int i = 2; i <= n; i++) {
        while(n % i == 0) {
            cout << i << " ";
            n /= i; // repeated division by i
        }
    }

    return 0;
}