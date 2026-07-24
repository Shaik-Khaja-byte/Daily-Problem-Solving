#include <bits/stdc++.h>

using namespace std;

int main(){
    cout << "enter two numbers : ";
    int a, b;
    cin >> a >> b;

    cout << "HCF of " << a << " & " << b << " is ";

    // repeated division method
    while(b != 0){
        int rem = a % b; // find the remainder of two numbers
        a = b; // a becomes b
        b = rem; // b becomes the remainder
    } // again the remainder is calculated until b becomes zero and the a becomes the HCF

    cout << a << endl;

    return 0;
}