#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 3, 2, 1, 5};
    int n = vec.size();
    
    // to find the unique elements: classic map utilization
    unordered_map<int, int> freq;

    for(int i = 0; i < n;i++){
        freq[vec[i]]++;
    }

    for (auto res: freq){
        if (res.second == 1){
            cout << res.first << " ";
        }
    }

    return 0;
}