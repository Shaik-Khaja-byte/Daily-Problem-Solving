#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n-1);
}

int main() {
    int n;
    cin >> n;

    cout << "recusive : " << fact(n) << endl;

    int ans{1};
    for (int i = 1; i<=n; i++) {
        ans *= i;
    }

    cout << "iterative : " << ans;

    return 0;
}