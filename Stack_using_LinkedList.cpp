#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* TOP = NULL;

void push(int x) {
    Node* n1 = new Node();
    if (TOP == NULL) {
        n1->data = x;
        n1->next = NULL;
        TOP = n1;
    } else {
        n1->data = x;
        n1->next = TOP;
        TOP = n1;
    }
}

int main() {
    push(12);
    push(14);
    push(15);

    Node* temp = TOP;
    while (temp != NULL) {
        cout << temp->data;
        temp = temp->next;
    }
}

