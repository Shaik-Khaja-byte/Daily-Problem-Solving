#include <bits/stdc++.h>
using namespace std;

int main() {
    int n{}, ans{}, place{1};
    cin >> n;

    while(n != 0) {
        int digit = n % 10;
        
        if(digit == 1)
            digit = 0;

        ans = ans + digit * place;

        place *= 10;
        n /= 10;
    }

    cout << ans << endl;

    return 0;
}