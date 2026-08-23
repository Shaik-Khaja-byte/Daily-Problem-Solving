#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    int n = num; // create a duplicate to manipulate

    int square = n * n, count = 0; // calculate square of the input number 

    while(n > 0) { // find the count of digits of input
        count++;
        n /= 10;
    }

    n = num; // reset the n

    int reverse = 0;
    for (int i = 0; i<count; i++) { // find the last count digits from squared number
        reverse = reverse * 10 + square % 10;
        square /= 10;
    } // the number will be reversed

    int last2 = 0;
    while(reverse > 0) { // reverse again to make it original
        last2 = last2 * 10 + reverse % 10;
        reverse /= 10;
    } 

    if (last2 == num) { // moment of truth
        cout << "Automorphic";
    } else {
        cout << "Not Automorphic";
    }

    return 0;
}