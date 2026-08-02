#include <bits/stdc++.h>
using namespace std;

int equilibriumIndex(vector<int> vec, int n){
    vector<int> prefix(n), suffix(n);

    // calculate the prefix sum of the array
    prefix[0] = vec[0];
    for (int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + vec[i];
    }

    // calculate the suffix sum of the array
    suffix[n - 1] = vec[n - 1];
    for (int i = n - 2; i >= 0; i--){
        suffix[i] = vec[i] + suffix[i+1];
    }

    // compare each index, if both match - it's an equilibrium index
    for (int i = 0; i < n; i++){
        if (prefix[i] == suffix[i]){
            return i;
        }
    }

    return -1;
}

int main(){
    vector<int> vec = {1, 3, 4, 2, 2, 0};
    int n = vec.size();

    cout << equilibriumIndex(vec, n);

    return 0;
}