#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<char> vec = {'A', 'B', 'C', 'D', 'E', 'F'};
    int n = vec.size();

    int d; // represents the count from which you want to rotate the array
    cin >> d;

    d = d % n; // calculate the remainder for longer rotations

    vector<char> dup (n); // duplicate array of the same original size

    int counter{}; 

    // to put the elements from d to n
    // if d = 2, start from 2 and fill the dup array
    // dup = ['C', 'D', 'E', 'F', ' ', ' ']
    for(int i = d; i < n;i++){
        dup[i] = vec[counter];
        counter++;
    }


    // putting the remaining elements at their place
    // dup = ['C', 'D', 'E', 'F', 'A', 'B']
    for(int i = 0; i < d;i++){
        dup[i] = vec[counter];
        counter++;
    }

    for(auto it : dup){
        cout << it << " ";
    }

    return 0;
}