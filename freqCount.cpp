#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> vec = {1, 2, 1, 4, 4, 4};
    int n = vec.size();

    unordered_map<int, int> freq;

    for(int i = 0; i < n;i++){
        freq[vec[i]]++;
    }

    for(auto val: freq){
        cout << val.first << " : " << val.second << endl;
    }

    return 0;
}