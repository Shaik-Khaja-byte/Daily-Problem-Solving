#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int elem, vector<int> vec){
    int n = vec.size();

    int start = 0;
    int end = n - 1;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if(vec[mid] == elem) {
            return true;
        } else if (vec[mid] > elem) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return false;
}

bool isSubset(vector<int>& vec1, vector<int>& vec2){
    if (vec1.size() > vec2.size()) // base case if the sub array size is greater than the parent array - invalid
        return false;

    sort(vec2.begin(), vec2.end()); // sort the array first in order to apply binary search

    for (int i = 0; i < vec1.size(); i++) { // check for each element in the vec1 if it is present in the vec2  
        if (!binarySearch(vec1[i], vec2)) { // by applying binary search on it
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> vec1 = {1, 3, 5, 7, 8};
    vector<int> vec2 = {1, 2, 3, 4, 5, 6, 7};

    if (isSubset(vec1, vec2)){
        cout << "vec1 is a subset of vec2";
    } else {
        cout << "vec2 is not a subset of vec2";
    }

    return 0;
}