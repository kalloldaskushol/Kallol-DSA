#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;

    node(int item) {
        data = item;
        next = NULL;
    }
};

struct SLL {
    node *head = NULL;

    void insertAtHead(int item);
    void insertAtEnd(int item);
    void insertAtAnyPos(int item, int pos);
    void deleteHead();
    void deleteEnd();
    void _search(int item);
    void print();
};

void SLL::insertAtHead(int item) {
    node *n = new node(item);
    if (head == NULL) {
        head = n;
    } else {
        n->next = head;
        head = n;
    }
}

void SLL::insertAtEnd(int item) {
    node *n = new node(item);
    if (head == NULL) {
        head = n;
    } else {
        node *h = head;
        while (h->next != NULL) {
            h = h->next;
        }
        h->next = n;
    }
}

void SLL::insertAtAnyPos(int item, int pos) {
    if (pos < 0) {
        cout << "Invalid position" << endl;
        return;
    }
    
    if (pos == 0) {
        insertAtHead(item);
        return;
    }

    node *n = new node(item);
    node *h = head;

    // Traverse to the node just before the desired position
    for (int i = 0; i < pos - 1; i++) {
        if (h == NULL) {
            cout << "Position out of bounds" << endl;
            return;
        }
        h = h->next;
    }

    // Insert the new node
    n->next = h->next; // Link the new node to the next node
    h->next = n;       // Link the previous node to the new node
}

void SLL::print() {
    if (head == NULL) {
        cout << "SORRY DUDEEEEE <3" << endl;
    } else {
        node *h = head;
        while (h != NULL) {
            cout << h->data << " ";
            h = h->next;
        }
        cout << endl;
    }
}

void SLL::_search(int item) {
    node *h = head;
    while (h != NULL) {
        if (h->data == item) {
            cout << "found" << endl;
            return;
        }
        h = h->next;
    }
    cout << "Not Found" << endl;
}

void SLL::deleteHead() {
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    node *h = head;
    head = head->next;
    delete h;
}

int main() {
    SLL list;

    list.insertAtHead(10);
    list.insertAtHead(20);
    list.insertAtHead(30);
    list.insertAtHead(40);

    list.insertAtEnd(50);
    list.print();

    list.insertAtAnyPos(25, 2); // Insert 25 at position 2
    list.print();

    list.deleteHead();
    list.print();

    return 0;
}
