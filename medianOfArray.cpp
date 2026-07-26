#include <bits/stdc++.h>
using namespace std;

float findMedian(vector<int> vec){

    int n = vec.size();

    // ALGORITHM
    // 1. Sort the array
    sort(vec.begin(), vec.end());

    // 2. If size odd return middle element else return the avg of two middle elems (in even case)
    if(n % 2 == 1){
        return vec[ n / 2.0];
    } else {
        return (vec[n / 2 - 1] + vec[n / 2]) / 2.0;
    }
}

int main(){
    vector<int> vec = {3, 1, 2, 4, 5, 6};

    cout << "Median = " << findMedian(vec);

    return 0;
}