#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double d = b * b - 4 * a * c;

    if(d > 0) {
        double root1 = (-b + sqrt(d)) / (2*a);
        double root2 = (-b - sqrt(d)) / (2*a);

        cout << "Roots are real and different\n";
        cout << root1 << endl << root2 << endl;
    } else if(d == 0) {
        double root = -b / (2*a);

        cout << "Roots are real and equal\n";
        cout << root << endl;
    } else {
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-d) / (2*a);

        cout << "Roots are complex\n";
        cout << realPart << "+" << imaginaryPart << "i" << endl << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}