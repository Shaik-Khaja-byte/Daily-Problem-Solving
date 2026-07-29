#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 3, 2, 1, 5};
    int n = vec.size();

    // keep two unordered sets
    unordered_set<int> seen; // contain unique elements
    unordered_set<int> duplicates; // contains duplicate / repeated elements

    for (int i = 0; i < n;i++){
        if(seen.find(vec[i]) != seen.end()){ // check if the element already exists in seen set
            duplicates.insert(vec[i]); // if yes put that element in duplicates set
        } else {
            seen.insert(vec[i]); // or else just put it in seen set
        }
    }

    for (auto res : duplicates){
        cout << res << " ";
    }

    return 0;
}