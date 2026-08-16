#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a == b) {
        cout << "both are equal";
    } else if (a > b) {
        cout << a;
    } else {
        cout << b;
    }

    return 0;
}