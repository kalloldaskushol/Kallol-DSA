#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;

    Node(int item) {
        data = item;
        next = prev = NULL;
    }
};

struct CDLL {
    Node *head = NULL;

    void insertAtHead(int item);
    void insertAtEnd(int item);
    void insertAtAnyPosition(int item, int pos);
    void deleteHead();
    void deleteAnyPosition(int pos);
    void _search(int item);
    void print();
    int getLength();
};

void CDLL::insertAtHead(int item) {
    Node *n = new Node(item);

    if (head == NULL) {
        head = n;
        head->next = head;
        head->prev = head;
    } else {
        Node *last = head->prev;

        n->next = head;
        n->prev = last;
        head->prev = n;
        last->next = n;
        head = n;
    }
}

void CDLL::insertAtEnd(int item) {
    Node *n = new Node(item);

    if (head == NULL) {
        head = n;
        head->next = head;
        head->prev = head;
    } else {
        Node *last = head->prev;

        last->next = n;
        n->prev = last;
        n->next = head;
        head->prev = n;
    }
}

int CDLL::getLength() {
    if (head == NULL) return 0;

    int count = 0;
    Node *temp = head;
    do {
        count++;
        temp = temp->next;
    } while (temp != head);

    return count;
}

void CDLL::insertAtAnyPosition(int item, int pos) {
    int len = getLength();

    if (pos < 1 || pos > len + 1) {
        cout << "Invalid position\n";
        return;
    }

    if (pos == 1) {
        insertAtHead(item);
        return;
    }

    Node *n = new Node(item);
    Node *temp = head;

    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    n->next = temp->next;
    n->prev = temp;
    temp->next->prev = n;
    temp->next = n;
}

void CDLL::deleteHead() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    if (head->next == head) {
        delete head;
        head = NULL;
    } else {
        Node *last = head->prev;
        Node *delNode = head;
        head = head->next;
        head->prev = last;
        last->next = head;
        delete delNode;
    }
}

void CDLL::deleteAnyPosition(int pos) {
    int len = getLength();

    if (pos < 1 || pos > len) {
        cout << "Invalid position\n";
        return;
    }

    if (pos == 1) {
        deleteHead();
        return;
    }

    Node *temp = head;

    for (int i = 1; i < pos; i++) {
        temp = temp->next;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

void CDLL::_search(int item) {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node *temp = head;
    do {
        if (temp->data == item) {
            cout << "Found\n";
            return;
        }
        temp = temp->next;
    } while (temp != head);

    cout << "Not Found\n";
}

void CDLL::print() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node *temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {
    CDLL li;

    li.insertAtHead(10);
    li.insertAtHead(20);
    li.insertAtEnd(30);
    li.insertAtAnyPosition(25, 2);
    li.insertAtAnyPosition(5, 1);
    li.print();

    li.deleteAnyPosition(3);
    li.deleteAnyPosition(1);
    li.print();

    return 0;
}


