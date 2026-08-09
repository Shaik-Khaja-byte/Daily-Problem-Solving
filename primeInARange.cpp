#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main(){
    int min{}, max{};
    cin >> min >> max;

    if (min <= 1) {
        cout << "min value must be greater than 1";
        exit(0);
    }

    for (int i = min; i <= max; i++){
        if (isPrime(i)) {
            cout << i << " ";
        } 
    }

    return 0;
}