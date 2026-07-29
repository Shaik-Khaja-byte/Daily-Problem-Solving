#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {2, 3, -2, 4};
    int n = vec.size();

    int maxProd = vec[0]; // holds the max prod till the current element
    int minProd = vec[0]; // holds the min prod till the current element
    int ans = vec[0];

    for (int i = 1; i < n;i++){

        if (vec[i] < 0){ // whenver we encounter a negative element we swap. umm... WHY!?
            swap(maxProd, minProd); // if we dont, and we allow it anyways (big +ve num x a -ve = big -ve) (which is not desirable)
        } // it's a way of protecting our maxProd from taking a larger damage

        maxProd = max(vec[i], maxProd * vec[i]); // update as usual
        minProd = min(vec[i], minProd * vec[i]);

        ans = max(ans, maxProd);
    }

    cout << maxProd << endl << minProd << endl << ans;

    return 0;
}