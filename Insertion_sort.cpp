#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int i, j, key;
    for(i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){
    int arr[5] = {9, 5, 8, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    cout << "before insertion sort: " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    insertionSort(arr, n);

    cout << "after insertion sort: " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}

