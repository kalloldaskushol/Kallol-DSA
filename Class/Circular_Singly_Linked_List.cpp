#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int item) {
        data = item;
        next = NULL;
    }
};

struct CSLL {
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

void CSLL::insertAtHead(int item) {
    Node *n = new Node(item);

    if(head == NULL) {
        head = n;
        n->next = head;
    } else {
        Node *temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        n->next = head;
        temp->next = n;
        head = n;
    }
}

void CSLL::insertAtEnd(int item) {
    Node *n = new Node(item);

    if(head == NULL) {
        head = n;
        n->next = head;
    } else {
        Node *temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
    }
}

int CSLL::getLength() {
    if(head == NULL) return 0;

    int count = 0;
    Node *temp = head;
    do {
        count++;
        temp = temp->next;
    } while(temp != head);

    return count;
}

void CSLL::insertAtAnyPosition(int item, int pos) {
    int len = getLength();

    if(pos < 1 || pos > len + 1) {
        cout << "Invalid position\n";
        return;
    }

    if(pos == 1) {
        insertAtHead(item);
        return;
    }

    Node *n = new Node(item);
    Node *temp = head;

    for(int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    n->next = temp->next;
    temp->next = n;
}

void CSLL::deleteHead() {
    if(head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    if(head->next == head) {
        delete head;
        head = NULL;
    } else {
        Node *temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }

        Node *delNode = head;
        head = head->next;
        temp->next = head;
        delete delNode;
    }
}

void CSLL::deleteAnyPosition(int pos) {
    int len = getLength();

    if(pos < 1 || pos > len) {
        cout << "Invalid position\n";
        return;
    }

    if(pos == 1) {
        deleteHead();
        return;
    }

    Node *temp = head;
    for(int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    Node *delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}

void CSLL::_search(int item) {
    if(head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node *temp = head;
    do {
        if(temp->data == item) {
            cout << "Found\n";
            return;
        }
        temp = temp->next;
    } while(temp != head);

    cout << "Not Found\n";
}

void CSLL::print() {
    if(head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node *temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != head);

    cout << endl;
}

int main() {
    CSLL li;

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

