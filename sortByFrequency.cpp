#include <bits/stdc++.h>
using namespace std;

void sortByFrequency(vector<int>& vec, int n){
    // step 1: create a map and store the frequencies

    unordered_map<int, int> map;
    for (int i = 0; i < n;i++){
        map[vec[i]]++;
    }

    // step 2: store (value, freq) in an array

    vector<pair<int, int>> v;

    for(auto it: map){
        v.push_back(it);
    }

    // step 3: sort based on frequency (if there are two elements with same freq, the smallest elem should be sorted first)

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b){
        if (a.second == b.second)
            return a.first < b.first;
        return a.second > b.second;
    });

    // step 4: rewrite the original array

    int index = 0;
    for(auto it: v){
        for(int i = 0; i < it.second;i++){
            vec[index++] = it.first;
        }
    }
}


int main(){
    vector<int> vec = {1, 2, 3, 2, 4, 3, 1, 2};
    int n = vec.size();

    sortByFrequency(vec, n);

    for (int it: vec){
        cout << it << " ";
    }

    return 0;
}