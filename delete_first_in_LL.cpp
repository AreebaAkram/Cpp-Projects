#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = NULL;

void insertBegin(int n) {
    Node* n1 = new Node();
    n1->data = n;

    if (head == NULL) {
        n1->next = NULL;
        head = n1;
    } else {
        n1->next = head;
        head = n1;
    }
}

void deleteFirst() {
    if (head == NULL) {
        cout << "Underflow Condition" << endl;
    } else {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    insertBegin(34);
    insertBegin(59);
    insertBegin(44);
    deleteFirst();

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}

