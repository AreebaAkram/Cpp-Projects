#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int j, minj;
    for(int i = 0; i < n-1; i++){
        minj = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minj]){
                minj = j;
            }
        }
        if(minj != i){
            swap(arr[minj], arr[i]);
        }
    }
}

int main(){
    int arr[5] = {12, 6, 15, 4, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before sorting: " << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }

    selectionSort(arr, n);

    cout << "After sorting: " << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }

    return 0;
}

