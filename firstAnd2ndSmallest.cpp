#include<bits/stdc++.h>
using namespace std;

vector<int> firstAnd2ndSmallest(vector<int>& vec){

    int n = vec.size();

    // base case: you can find 1st and 2nd smalles elements  ony if the array is the size of two or more
    if(n < 2){
        return {-1};
    }

    int first = INT_MAX;
    int second = INT_MAX;


    for(int i = 0; i<n; i++){
        if(vec[i] < first){
            second = first;
            first = vec[i];
        }

        else if(vec[i] < second && vec[i] != first){
            second = vec[i];
        }
    }

    // suppose there is only one number repeated (finding the second smallest is not possible)
    if(second == INT_MAX){
        return {-1};
    }

    return {first, second};
}

using namespace std;

int main(){
    vector<int> vec = {3, 5, -10, 8, -1, 6};

    vector<int> ans = firstAnd2ndSmallest(vec);

    for(auto res : ans){
        cout << res << " ";
    }

    return 0;
}