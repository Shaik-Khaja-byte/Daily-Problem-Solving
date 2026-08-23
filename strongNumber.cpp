#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    int factorial = 1;
    for(int i = 2; i<=n; i++){
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num;
    cin >> num;
    int n = num, sum{};

    while(n > 0) {
        int rem = n % 10;
        sum += fact(rem);
        n /= 10;
    }

    if(sum == num){
        cout << sum << " is strong";
    } else {
        cout << "not strong";
    }

    return 0;
}