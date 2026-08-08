#include <bits/stdc++.h>
using namespace std;

bool isPallindrome(int n) {
    int reverse = 0;
    int num = n;

    while(num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    if (n == reverse) {
        return true;
    } 
    return false;
}

int main(){
    int min{}, max{};
    cin >> min >> max;

    for (int i = min; i <= max; i++){
        if(isPallindrome(i)) {
            cout << i << " ";
        }
    }

    return 0;
}