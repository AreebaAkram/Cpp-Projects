#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    int num, index;
    cout << "enter number to search for: ";
    cin >> num;

    for (int j = 0; j < n; j++) {
        if (arr[j] == num) {
            index = j;
            break;
        }
    }

    cout << "element found at index: " << index;
}

