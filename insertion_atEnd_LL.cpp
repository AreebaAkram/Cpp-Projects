#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

Node* head = NULL;

void insertEnd(int n) {
    Node* n1 = new Node();
    n1->data = n;
    n1->next = NULL;

    if (head == NULL) {
        head = n1;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {  // it traverses the nodes to find the last node so that it can attach it to the end
            temp = temp->next;
        }
        temp->next = n1;
    }
}

int main() {
    insertEnd(34);
    insertEnd(59);
    insertEnd(44);

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}

