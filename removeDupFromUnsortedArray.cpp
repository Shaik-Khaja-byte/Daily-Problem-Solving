#include <bits/stdc++.h>
using namespace std;

int main(){
    // if the array is unsorted and you wanna remove duplicates while preserving order
    vector<int> vec = {1, 4, 2, 3, 1, 4, 1, 5, 3};

    // using unordered set
    unordered_set<int> seen;
    vector<int> ans;

    for (auto x : vec){
        if(seen.find(x) == seen.end()){ // if it doesn't find the element it returns an iterator called end() -> if that's the case
            seen.insert(x); // we insert, as the element was not present
            ans.push_back(x); // push in ans array as well
        }
    }

    for(auto res : ans){
        cout << res << " ";
    }

    return 0;
}