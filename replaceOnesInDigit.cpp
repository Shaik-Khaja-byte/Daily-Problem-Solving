#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{}, ans{}, place{1};
    cin >> n;

    while(n != 0) {
        int digit = n % 10;
        
        if(digit == 1)
            digit = 0;

        ans = ans + digit * place; //the idea is to multiply place (1 initially) and with each iteration grows by x10

        place *= 10;
        n /= 10;
    }

    cout << ans << endl;

    return 0;
}