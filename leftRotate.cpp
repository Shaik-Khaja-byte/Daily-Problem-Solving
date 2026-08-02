#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& vec, int n, int k){
    // to rotate array left by k elements
    k = k % n; // first simplify k
    vector<int> temp(k); // create an array of size k - it will holdd the starting k values
    
    for(int i = 0; i < k; i++){ // put the starting k values of vec into temp 
        temp[i] = vec[i];
    }

    for(int i = 0; i < n - k; i++){ // shift the array elements left
        vec[i] = vec[i + k];
    }

    for(int i = n - k; i < n; i++){ // transfer the elements back to vec
        vec[i] = temp[i - (n - k)];
    }
}

/*
if you want to do the same operation but by rotating it by right... you can do sso by following the same 
pattern byt the logic will be changed, although there will be no effect on time ot space complexity
*/

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    int n = vec.size();
    cout << "Enter the value of k: ";
    int k;
    cin >> k;

    leftRotate(vec, n, k);

    for (auto it : vec){
        cout << it << " ";
    }

    return 0;
}