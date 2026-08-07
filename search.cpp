#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {1, 5, 6, 8, -1, 0};
    int n = vec.size();

    int key = -6;

    bool found = false;

    // linear search
    for (int i = 0; i < n; i++){
        if (vec[i] == key){
            cout << "key is found at : " << i << " index using linear search" << endl;
            found = true;
            break;
        } 
    }

    if(!found){
        cout << "no element found using linear search" << endl;
    }

    cout << "=======================" << endl;


    // binary search

    sort(vec.begin(), vec.end());

    int low = 0;
    int high = n-1;
    found = false;

    while (low <= high){
        int mid = (low + high) / 2;
        if (vec[mid] == key){
            cout << "key is found at : " << mid << " index using binary search" << endl;
            found = true;
            break;
        } else if (vec[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(!found) {
        cout << "no element found using binary search" << endl;
    }
    return 0;
}