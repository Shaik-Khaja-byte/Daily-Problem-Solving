#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{}, p{};
    cout << "enter number : ";
    cin >> n;
    cout << "enter power : ";
    cin >> p;

    int ans{1};
    for (int i = 0; i < p; i++) {
        ans = ans * n;
    }

    cout << ans;

    return 0;
}