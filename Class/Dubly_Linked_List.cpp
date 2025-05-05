#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next, *prev;

    Node(int item){
        data = item;
        prev = next = NULL;
    }
};

struct DLL{
    Node *head = NULL;
    void insertAtHead(int item);
    void insertAtEnd(int item);
    void insertAtAnyPos(int item, int pos);
    void _search(int item);
    void deleteHead();
    void deleteEnd();
    void deleteAtAnyPos(int pos);
    void print();
};

void DLL :: insertAtHead(int item){
    Node *n = new Node(item);

    if(head == NULL){
        head = n;
    }else{
        n->next = head;
        head->prev = n;
        head = n;
    }
}

void DLL :: insertAtEnd(int item){
    Node *n = new Node(item);

    if(head == NULL){
        head = n;
    }else{
        Node *head_Copy = head;
        while(head_Copy->next != NULL){ // till the head next == NULL
            head_Copy = head_Copy->next;
        }
        head_Copy -> next = n;
        n->prev = head_Copy;
    }
}

void DLL :: insertAtAnyPos(int item, int pos){
    Node *n = new Node(item);

    if(pos == 1){
        n->next = head;
        head->prev = n;
        head = n;
    }else{
        Node *a = head;
        for(int i=1; i<= pos-2; i++){
            a=a->next;
        }
        if(a->next == NULL){
            a->next = n;
            n->prev = a;
        }else{
            Node *b = a->next;
            a->next = n;
            n->prev = a;
            n->next = b;
            b->prev = n;
        }
    }
}

void DLL :: print(){
    if(head == NULL){
        cout << "Sorry Dude" << endl;
    }else{
        Node *h = head;
        while(h != NULL){
            cout << h->data << " ";
            h = h->next;
        }
        cout << endl;
    }
}

void DLL :: deleteHead(){
    if(head == NULL){
        cout << "Sorry Dude" << endl;
    } else if(head -> next == NULL) { //Only one node
        Node *h = head;
        head = NULL;
        delete h;
    }else{
        Node *h = head;
        head = head->next;
        head->prev = NULL;
        delete h;
    }
}
void DLL :: _search(int item){
    Node *temp = head;
    int pos = 1;

    while(temp != NULL){
        if(temp->data == item){
            cout << "Found at position: " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }

    cout << "Item not found." << endl;
}
int main(){
    DLL list;

    list.insertAtHead(30);
    list.insertAtHead(20);
    list.insertAtEnd(40);
    list.insertAtAnyPos(25, 2);
    list.insertAtAnyPos(10, 1);

    cout << "Current List: ";
    list.print();

    list._search(25);
    list._search(99);

    list.deleteHead();
    cout << "After deleting head: ";
    list.print();

    return 0;
}
