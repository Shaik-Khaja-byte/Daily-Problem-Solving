#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{};
    cout << "Upto? : ";
    cin >> n;

    int a{}, b{1};
    cout << a << " " << b << " ";

    for (int i = 0; i < n; i++) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}