#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{};
    cin >> n;

    int num = n, rem{}, ans{};

    while (num != 0) {
        rem = num % 10;
        ans = ans * 10 + rem;
        num /= 10;
    }

    cout << ans << endl;

    if (n == ans) {
        cout << "palindrome";
    } else {
        cout << "not a palindrome";
    }

    return 0;
}
