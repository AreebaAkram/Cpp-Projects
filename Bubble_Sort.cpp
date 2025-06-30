#include <iostream>
using namespace std;

int main() {
    int temp, pass = 0;
    int arr[5] = {34, 12, 7, 32, 2};

    cout << "Array before sorting: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        pass++;
    }

    cout << endl << "After sorting: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    cout << "number of passes to sort this array = " << pass;
}

