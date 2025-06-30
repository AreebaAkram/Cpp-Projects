#include <iostream>
using namespace std;

int main() {
    // using while loop
    int n = 3;
    int k = 0;
    int LA[n] = {2, 4, 5};
    
    while(k != n) {
        cout << k + 1 << " element is: " << LA[k] << endl;
        k++;
    }

    // using for loop
    cout << "\n using for loop" << endl;
    for(int i = 0; i < n; i++) {
        cout << i + 1 << " element is: " << LA[i] << endl;
    }
}

