# include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, c;
    int dummy;
    cin >> a >> b >> c;

    dummy = max(a, b);
    cout << max(dummy, c);

    return 0;
}