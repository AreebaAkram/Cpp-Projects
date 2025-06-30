#include <iostream>
using namespace std;

int stack[5];
int TOP = -1;

void PUSH(int x) {
    if (TOP == 5 - 1) {
        cout << "Stack overflow";
    } else {
        TOP = TOP + 1;
        stack[TOP] = x;
        cout << stack[TOP] << endl;
    }
}

void POP() {
    if (TOP == -1) {
        cout << endl << "underflow" << endl;
    } else {
        cout << endl << "pop: " << endl;
        cout << stack[TOP];
        TOP = TOP - 1;
    }
}

int main() {
    PUSH(13);
    PUSH(14);
    PUSH(15);
    PUSH(16);
    PUSH(17);
    PUSH(18);
    POP();
}

