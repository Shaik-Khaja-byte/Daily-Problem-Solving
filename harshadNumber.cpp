#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = n, sum = 0;

    while(num > 0) {
        int rem = num % 10;
        sum += rem;
        num /= 10;
    }

    if(n % sum == 0) {
        cout << "Harshad Number";
    } else {
        cout << "Not a Harshad Number";
    }

    return 0;
}