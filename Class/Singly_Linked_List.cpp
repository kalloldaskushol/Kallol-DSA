#include<iostream>
using namespace std;

//Node Creation
struct Node{
    int data;
    Node *next; // address of the second node

    //default Constructor
    Node(int item){
        data = item;
        next = NULL; // if node is only called by item then the next will be alocated by NULL.
    }

};

//Single Linked List prototype

struct SLL{
    Node *head = NULL;

    //Functions to work in SLL
    void insertAtHead(int item);
    void insertAtEnd(int item);
    void insertAtAnyPosition(int item, int pos);
    void _Search(int data);
    void deleteHead();
    void deleteEnd();
    void deleteAnyPosition(int pos);
    void print();

};

//Function Declaration
void SLL :: insertAtHead(int item){
    Node *newNode = new Node(item); // Making new node by call the default perameter

    if (head == NULL) head = newNode;
    else{
        newNode->next = head;
        head = newNode;
    }
}

void SLL ::insertAtEnd(int item){
    Node *newNode = new Node(item);

    if(head == NULL) head = newNode;
    else {
        // we have to traverse to the end node, so lets make a copy of the head and use it as the itirator
        Node *h = head;
        while(h->next != NULL){
            h = h->next; // this is the updatetion condition
        }
        // now h is at the last node
        h->next = newNode; // new node is now set on the end
    }
}

void SLL :: insertAtAnyPosition(int item, int pos){

    Node *newNode = new Node(item);

    //postion zero means head
    if(pos == 0) {
        if(head == NULL){

            newNode = head;
        }else {
            newNode->next = head;
            head = newNode;
        }
    }else{
        Node *a = head;
        for(int i=1; i<pos; i++){
            a = a->next;
            // now a is at one node before the desired position
            if(a == NULL){
                cout << "Position out of bounds" << endl; return;
            }
        }

        Node *b = a->next;
        a->next = newNode;

        if(b != NULL){
            newNode->next = b;
        }
    }
}

void SLL :: _Search(int item){
    Node *h = head;
    bool flag = false;

    while(h != NULL){
        
        if(h->data == item){
            flag = true;
            break;
        }
        h = h->next;
    }

    if(flag == true) cout << "Found" << endl;
    else cout << "Not Found" << endl;
}

void SLL :: deleteHead(){

    if(head == NULL) cout << "This is an empty list" << endl;
    else{
        Node *h = head;
        head = head->next; // making the head next into the new head
        delete h;
    }
}

void SLL::deleteEnd() {
    Node* h = head;

    if (head == NULL) {
        cout << "This is an empty list" << endl;
    }
    // If there is only one node
    else if (head->next == NULL) {
        delete head;
        head = NULL;
    } else {
        // Traverse to the second-to-last node
        while (h->next->next != NULL) {
            h = h->next;
        }
        delete h->next;
        h->next = NULL;
    }
}

void SLL::deleteAnyPosition(int pos) {
    if (head == NULL) {
        cout << "The list is empty." << endl;
        return;
    }

    // Delete head node
    if (pos == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    Node* previous = NULL;

    // Traverse to the node at the given position
    for (int i = 0; i < pos; i++) {
        previous = current;
        current = current->next;

        if (current == NULL) {
            cout << "Position out of bounds." << endl;
            return;
        }
    }

    // Delete the node
    previous->next = current->next;
    delete current;
}

void SLL :: print(){
    if(head == NULL){
        cout << "List is empty" << endl;
    }else{
        Node *h = head;
        
        while(h != NULL){
            cout << h->data << " ";
            h=h->next;
        }
        cout << endl;
    }
}

int main(){

    SLL list;
    list.insertAtHead(10);
    list.insertAtEnd(20);
    list.insertAtHead(30);
    list.insertAtEnd(40);
    list.insertAtHead(50);
    list.insertAtAnyPosition(60,2);
    list.print();
    list.deleteHead();
    list.deleteEnd();
    list.deleteAnyPosition(1);

    cout << "Search test" << ": ";
    list._Search(10);

    cout<<"After Delete The List" << ": ";
    list.print();

    /*
    Output:

        50 30 60 10 20 40 
        Search test: Found
        After Delete The List: 30 10 20 
*/
    return 0;
}