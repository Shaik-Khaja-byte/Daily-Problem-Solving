#include <bits/stdc++.h>
using namespace std;

int main(){

    // here we got the pairs (symm and asymm as well)
    vector<pair<int, int>> vec = {
        {1, 2},
        {3, 4},
        {4, 3},
        {6, 9},
        {2, 1}
    };

    // we will use a map to keep track of these pairs
    unordered_map<int, int> mp;

    for (auto p : vec){
        // extract the first and second element from the current pair
        int first = p.first;
        int second = p.second;

        // if the second is present in the map and also it is mapped to the first (there you got a symmetric pair)
        if (mp.find(second) != mp.end() && mp[second] == first){
            cout << "(" << first << "," << second << ")" << endl; // print it
        } else {
            mp[first] = second; // or else just store the exact pair in the map as it is
        }
    }

  /* to get a deeper understanding:

    mp = < (1->2), (3->5), (2->3) >

    our current pair is: p = (5->3)

    we check: p.second (3) is in the map or not (turns out 3 is present) and this is not enough
    we also need to check if there is exact other value present, so we do mp[3] == 5 -> which in turn means 3->5 (it is...)
    voila... you found the answer!

    there might also be chances that you will not find such pair, in that case
    insert that pair as it is in the map */

    return 0;
}