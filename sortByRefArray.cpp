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
        // cout << "selected: (" << a << ", " << b << ")" << endl;

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

/*

NOTE FOR CURIOUS LEARNERS

while tracing this algo, I hit the fudamental doubt, 
How does the inbuilt sort function select the two elements from an array?

sequentially? WRONG!

the truth is - it's totally random based on compiler, STL Implementation, array size, recursion depth

then which algorithm does it use internally?
Intro Sort - a combination of quick, heap and insertion sort, that's why the selection is totally random

Many interviewers ask:
How many times does std::sort() call the comparator?

The answer is not fixed.

It depends on the implementation, but on average it's about O(n log n) comparisons. 
For an array of 1000 elements, the comparator might be called around 10,000–15,000 times.

to actually check how many comparisions it makes: add a print statement (uncomment it to see it in action)

*/