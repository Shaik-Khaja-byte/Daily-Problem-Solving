#include <bits/stdc++.h>
using namespace std;

vector <int> smallest2ndLargest(vector <int> vec){
    int n = vec.size();
    int smallest = INT_MAX;
    int first = INT_MIN;
    int second = INT_MIN;

    // edge cases - if there are no valid elements
    if (n < 2){
        return {-1};
    }


    // logic for finding the smallest
    for(int i = 0; i < n;i++){
        if(vec[i] < smallest){
            smallest = min(smallest, vec[i]);
        }
    }

    // logic for finding the second largest
    for(int i = 0; i < n;i++){
        if(vec[i] > first){
            second = first;
            first = vec[i];
        }

        else if(vec[i] > second && vec[i] != first){
            second = vec[i];
        }
    }

    // edge case - if the elements are repeated e.g {1,1,1,1}
    if (second == INT_MIN){
        return {-1};
    }

    return {smallest, second};
}

int main(){
    vector <int> vec = {1, 2, -1, 1, 3, 6, 5};
    vector <int> ans = smallest2ndLargest(vec);
    
    for (auto val: ans){
        cout << val << " ";
    }

    return 0;
}