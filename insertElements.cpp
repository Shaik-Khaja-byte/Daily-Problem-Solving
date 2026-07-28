#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter size : ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements : ";
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int value, index;
    cout << "Enter value to be inserted : ";
    cin >> value;

    cout << "Enter index : ";
    cin >> index;

    // shifting the elements logic
    for (int i = n-1; i >= index;i--){
        arr[i+1] = arr[i];
    }

    // inserting the element
    arr[index] = value;

    // increment the size of the array as you have added a new element
    n++;

    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}