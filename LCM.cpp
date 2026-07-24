#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int x = a, y = b;

    // HCF calculation logic
    while( b != 0 ){
        int rem = a % b;
        a = b;
        b = rem;
    }

    // LCM calculation formula - lcm x hcf = a x b
    int lcm = (x * y)/a;

    cout << lcm;

    return 0;
}