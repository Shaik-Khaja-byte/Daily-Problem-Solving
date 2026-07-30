#include <bits/stdc++.h>
using namespace std;

/*
RULES

- smallest element gets rank 1
- duplicate elements gets the same rank
- the next gets distinct element gets the next rank

HOW TO ACHEIVE IT?

- maintain a temp array
- sort it
- take an unordered map and push all the unique elements with their ranks
- iterate over original array and find each element's rank from the map
*/

int main(){
    vector<int> vec = {20, 1, 3, 14, 5, 6, 1, 1};

    vector<int> temp = vec;

    sort(temp.begin(), temp.end());

    unordered_map<int, int> rank;
    int r = 1;

    for(auto x: temp){
        if(rank.find(x) == rank.end()){
            rank[x] = r++;
        }
    }

    for(auto x: vec){
        cout << rank[x] << " ";
    }

    return 0;
}