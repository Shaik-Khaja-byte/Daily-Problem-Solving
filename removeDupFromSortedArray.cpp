#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 2, 3, 4, 4, 5, 6};
    int n = vec.size();

    // two pointer approach
    int j = 0; // j will point to the last unique value in the array

    for (int i = 1; i < n;i++){
        if(vec[i] != vec[j]){ // check if two elements are unique
            j++; // increment j
            vec[j] = vec[i]; // put the value of i inplace of j
        }
    }

    vec.resize(j + 1); // at the end of the loop resize the array with j+1 (as it started at 0)

    for (auto it : vec){
        cout << it << " ";
    }

    return 0;
}