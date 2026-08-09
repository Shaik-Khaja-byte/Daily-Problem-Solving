#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool isPrime = true;

    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) {
            isPrime = false;
            cout << "not prime";
            break;
        }
    }

    if (isPrime) {
        cout << "prime";
    }

    return 0;
}