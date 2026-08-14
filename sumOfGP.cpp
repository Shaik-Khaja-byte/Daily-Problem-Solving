#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, r, n;
    cin >> a >> r >> n;

    int sum;
    
    if(r == 1){
        sum = n * a;
    } else {
        sum = a * (pow(r, n) - 1) / (r - 1);
    }

    cout << sum;

    return 0;
}