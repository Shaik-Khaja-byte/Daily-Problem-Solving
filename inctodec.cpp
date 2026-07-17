#include <bits/stdc++.h>
using namespace std;

// goal is to sort in descending order
vector <int> incToDec(vector <int>& vec){
    int n = vec.size();

    sort(vec.begin(), vec.end(), [](int a, int b){ // use of lambda function
        return a > b; // condition to sort in descending order
    });

    return vec;
}

int main(){
    vector <int> vec = {3, 1, 4, 5, 2};
    vector <int> ans = incToDec(vec);

    for(auto val: ans){
        cout << val << " ";
    }

    return 0;
}