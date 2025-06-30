#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* f;
    Node* b;
};

Node* start = NULL;

void insertEnd(int n) {
    Node* n1 = new Node();
    n1->data = n;
    n1->f = NULL;
    n1->b = NULL;

    if (start == NULL) {
        start = n1;
    } else {
        Node* temp = start;
        while (temp->f != NULL) {
            temp = temp->f;
        }
        temp->f = n1;
    }
}

void deleteEnd() {
    if (start == NULL) {
        cout << "underflow" << endl;
    } else if (start->f == NULL) {
        start = NULL;
    } else {
        Node* temp = start;
        while (temp->f->f != NULL) {
            temp = temp->f;
        }
        temp->f = NULL;
    }
}

int main() {
    insertEnd(46);
    insertEnd(47);
    insertEnd(48);
    deleteEnd();

    Node* temp = start;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->f;
    }
}

