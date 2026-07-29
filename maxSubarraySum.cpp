#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = vec.size();

    int currSum = vec[0];
    int maxSum = vec[0];

    for (int i = 1; i < n; i++){
        currSum = max(vec[i], currSum + vec[i]);
        maxSum = max(maxSum, currSum);
    }

    cout << maxSum;
}