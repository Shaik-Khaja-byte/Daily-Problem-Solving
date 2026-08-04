#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    vector<int> order = {6, 7, 2, 1};

    unordered_map<int, int> rank;

    for (int i = 0; i < order.size(); i++){
        rank[order[i]] = i; // for each element in order array, store it's index -> which we will call as it's rank
    }

    sort(vec.begin(), vec.end(), [&](int a, int b){
        bool ina = rank.count(a); // check the counts of each element, if it's more than 1 -> casted to true else false
        bool inb = rank.count(b);

        if (ina && inb) { // if both are present in rank map, sort in descending order
            return rank[a] < rank[b];
        } else if (ina) { // if only a is present, it should come first hence return true -> a < b
            return true;
        } else if (inb) { // if only b is present, it should come second hence return false -> a > b
            return false;
        } else { // if no elements are present in rank sort as usual (in descending order)
            return a < b;
        }
    });

    for (auto it : vec){
        cout << it << " ";
    }

    return 0;
}