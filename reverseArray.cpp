#include <bits/stdc++.h>
using namespace std;

vector <int> reverseArray(vector <int>& vec){
    // two pointer approach
    int n = vec.size();
    int start = 0;
    int end = n-1;

    while(start < end){
        // swaping logic
        int temp = vec[start];
        vec[start] = vec[end];
        vec[end] = temp;

        // update the pointers
        start++;
        end--;
    }

    return {vec};
}

int main(){
    vector <int> vec = {1,2,3,4,5};
    vector <int> ans = reverseArray(vec);

    for (auto val: ans){
        cout << val << " ";
    }

    return 0;
}