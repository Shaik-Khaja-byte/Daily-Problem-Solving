#include<bits/stdc++.h>
using namespace std;

int main() {
    int n{}, reversed{};
    cin >> n;

    while(n > 0) {
        int rem = n % 10;
        reversed = reversed * 10 + rem;
        n /= 10;
    }

    cout << reversed;

    return 0;
}