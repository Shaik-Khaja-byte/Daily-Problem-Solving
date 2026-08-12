#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, n, d;
    cin >> a >> n >> d;

    int s = (n * (2*a + (n-1) * d))/2;

    cout << s;

    return 0;
}