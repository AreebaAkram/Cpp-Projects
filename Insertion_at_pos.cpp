#include <iostream>
using namespace std;

void insertElement(int arr[], int n, int k, int p) {
    for(int j = n - 1; j >= p; j--) {
        arr[j + 1] = arr[j];
    }
    arr[p] = k;
}

int main() {
    int arr[100] = {10, 15, 20, 40};
    int n = 4;
    int pos, key;

    cout << "enter key: ";
    cin >> key;

    cout << endl << "enter pos: ";
    cin >> pos;

    cout << "before insertion: " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    insertElement(arr, n, key, pos);
    n++;

    cout << "after insertion: " << endl;
    for(int k = 0; k < n; k++) {
        cout << arr[k] << endl;
    }
}

