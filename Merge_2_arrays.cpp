#include <iostream>
using namespace std;

int main() {
    int i, j, k, m;
    cout << "enter size of array 1: ";
    cin >> i;
    cout << endl << "enter size of array 2: ";
    cin >> j;

    int arr1[i], arr2[j], arr3[i + j];

    cout << endl << "enter element for array 1: " << endl;
    for (m = 0; m < i; m++) {
        cin >> arr1[m];
        arr3[m] = arr1[m];
    }

    k = m;
    cout << "enter elemnt for 2nd array: " << endl;
    for (int n = 0; n < j; n++) {
        cin >> arr2[n];
        arr3[k] = arr2[n];
        k++;
    }

    cout << "resultant array: " << endl;
    for (int g = 0; g < k; g++) {
        cout << arr3[g] << endl;
    }

    return 0;
}

