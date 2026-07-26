#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    int n = vec.size();

    int sum{};

    for (int i = 0; i < n;i++){
        sum += vec[i];
    }

    cout << sum/n;

    return 0;
}

