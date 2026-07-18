#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a = 0, b = 1, c;

    if(n == 0) c = 0;
    else if(n == 1) c = 1;
    else {
        for(int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
    }
    cout << n << "th Fibonacci = " << c;
    return 0;
}