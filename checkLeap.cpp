#include <bits/stdc++.h>
using namespace std;

int main() {
    int year;
    cout << "enter year in yyyy format : ";
    cin >> year;

    /*
    every multiple of 4 is a leap year, and it should not be a century year
    except, if the year is divisible by 400

    Remember like this: every year ≈ 365.25 days, so every 4 years add an extra day... if this continues, say for 100 years we will loose the track of seasons hence we decided, to correct it by saying that the century years can't be leap... in the process we realised that we over corrected the days hence to balance it add a day for every 400th year
    */

    if ((year % 400 == 0) || year % 4 == 0 && year % 100 != 0) {
        cout << "Leap year";
    } else {
        cout << "Not a Leap year";
    }

    return 0;
}