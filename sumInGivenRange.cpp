#include <bits/stdc++.h>
using namespace std;

int main() {
    int min{}, max{}, sum{};
    cin >> min >> max;

    for (int i = min; i <= max; i++){
        sum += i;
    }

    cout << sum;

    return 0;
}