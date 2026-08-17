#include <bits/stdc++.h>
using namespace std;

int main() {
    int year;
    cout << "enter year in yyyy format : ";
    cin >> year;

    /*
    every multiple of 4 is a leap year, and it should not be a century year
    except, if the year is divisible by 400
    */

    if ((year % 400 == 0) || year % 4 == 0 && year % 100 != 0) {
        cout << "Leap year";
    } else {
        cout << "Not a Leap year";
    }

    return 0;
}