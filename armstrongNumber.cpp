#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = n;
    int ans = 0;
    int count = 0;

    while(num > 0){
        num /= 10;
        count++;
    }

    num = n;

    while(num > 0){
        int rem = num % 10;
        ans += pow(rem, count);
        num /= 10;
    }

    if (ans == n) {
        cout << "armstrong";
    } else {
        cout << "not armstrong";
    }

    return 0;
}