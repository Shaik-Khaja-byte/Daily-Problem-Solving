#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{};
    cin >> n;

    n = abs(n);

    int maxV = INT_MIN;
    int minV = INT_MAX;

    while(n > 0) {
        int rem = n % 10;
        maxV = max(maxV, rem);
        minV = min(minV, rem);
        n /= 10;
    }

    cout << "Max : " << maxV << " Min : " << minV;
    return 0;
}