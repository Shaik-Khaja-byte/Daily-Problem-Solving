#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if( b == 0 )
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1{}, den1{}, num2{}, den2{};
    cout << "enter the first fraction: ";
    cin >> num1 >> den1;

    cout << "enter the second fraction: ";
    cin >> num2 >> den2;

    int num3 = (num1 * den2) + (num2 * den1);
    int den3 = den1 * den2;

    int g = gcd(num3, den3);

    num3 /= g;
    den3 /= g;

    cout << "the final fraction is : " << num3 << "/" << den3;

    return 0;
}