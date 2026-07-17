#include <bits/stdc++.h>
using namespace std;

int sumOfElems(vector <int> vec){
    int n = vec.size();
    int ans = 0;

    for (int i = 0; i < n;i++){
        ans += vec[i];
    }

    return ans;
}

int main(){
    vector <int> vec = {1, 2, 3};

    cout << sumOfElems(vec);

    return 0;
}