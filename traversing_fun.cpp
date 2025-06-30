#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int arr[] = {2, 4, -3, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    print(arr, n);
}

