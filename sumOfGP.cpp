#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, r, n;
    cin >> a >> r >> n; // first term, common diff, no. of elements in the series 

    int sum;
    
    if(r == 1){
        sum = n * a;
    } else {
        // formula to calculate GP
        sum = a * (pow(r, n) - 1) / (r - 1);
    }

    cout << sum;

    return 0;
}