#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (key == arr[mid]) {
            return mid;
        }
        if (key > arr[mid]) {
            low = mid + 1;
        }
        if (key < arr[mid]) {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {23, 45, 67, 88, 90, 120, 130, 199};
    int n = sizeof(arr) / sizeof(int);
    int results = binarySearch(arr, 0, n - 1, 90);
    
    if (results == -1) {
        cout << "element not found" << endl;
    } else {
        cout << "element found at index: " << results;
    }
}

