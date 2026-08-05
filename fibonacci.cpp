#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a = 0, b = 1, c;

    if(n == 0) c = 0; //base case 1
    else if(n == 1) c = 1; //base case 2
    else {
        for(int i = 2; i <= n; i++) {
            c = a + b; // sum of the previous two elements 
            a = b; // update a
            b = c; // update b
        }
    }
    cout << n << "th Fibonacci = " << c;
    return 0;
}