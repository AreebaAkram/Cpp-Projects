#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n, key, i;

    cout << "size of array: ";
    cin >> n;

    cout << endl << "enter key you want to add: ";
    cin >> key;

    cout << "before insertion: " << endl;
    for(i = 0; i < n; i++){
        cout << "enter element: ";
        cin >> arr[i];
    }

    for(int j = n; j > 0; j--){
        arr[j] = arr[j - 1];
    }

    arr[0] = key;
    n++;

    for(int k = 0; k < n; k++){
        cout << "after insertion: " << endl;
        cout << arr[k] << endl;
    }

    return 0;
}

