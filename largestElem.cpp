#include <bits/stdc++.h>
using namespace std;

int findLargest(vector <int>& vec){
    int n = vec.size();
    int largest = INT_MIN;

    for(int i = 0; i < n;i++){
        if (vec[i] > largest) {
            largest = max(largest, vec[i]);
        }
    }
    return largest;
}

int main(){
    vector <int> vec = {1,2,6,3,5};
    cout << findLargest(vec);
    return 0;
}