#include<iostream>
using namespace std;

struct node{
    int data;
    node *next, *prev;
    node(int d){
        data = d;
        prev = next = NULL;
    }
};

struct DLL{
    node *head = NULL;

    void insertAtHead(int item);
    void insertAtEnd(int item);
    void insertAtAnyPosition(int item, int pos);
    void deleteHead();
    void deleteEnd();
    void deleteAnyPosition(int pos);
    void _search(int item);
    void print();
};

void DLL:: insertAtHead(int item){
    node *n = new node(item);
    if(head = NULL){
        head = n;
    }else{
        n->next = head;
        head->prev = n;
        head = n;
    }
}

void DLL:: insertAtEnd(int item){
    node *n = new node(item);

    if(head == NULL){
        head = n;
    }else{
        node *h = head;

        while (h->next != NULL){
            h = h->next;
        }

        h->next = n;
        n->prev = h;
    }
}

void DLL :: print(){

    if(head == NULL){
        cout << "List is empty" << endl;
    }else{
        node *h = head;

        while(h!=NULL){
            cout << h->data << " ";
            h = h->next;
        }
        cout << endl;
    }
}

void DLL :: deleteHead(){
    
    if(head == NULL){
        cout << "List is Empty" << endl;
    }else if (head->next == NULL){ // If one element and it is head
        node *h = head;
        head = NULL;
        delete h;
    }else{
        node *h = head;

        head = head->next;
        head->prev = NULL;
        delete h;
    }
}

void DLL :: insertAtAnyPosition(int item, int pos){
    node *n = new node(item);

    if(pos == 1){
        insertAtHead(item);
    }else{
        node *a = head;
        for(int i=1; i< pos-1; i++){
            a=a->next;
        }
        if(a->next = NULL){ // a is at the end-> logic will now be insertAtEnd
            a->next = n;
            n->prev = a;
        }else{
            node *b = a->next;
            a->next = n;
            n->prev = a;

            n->next = b;
            b->prev = n;
        }
    }
}

void DLL:: deleteEnd(){
    if(head == NULL){
        cout << "Empty list "<< endl;
    }else if(head->next == NULL){

        node *h = head;
        head = NULL;
        delete h;
    }else{
        node *h = head;

        while(h->next != NULL){
            h=h->next;
        }

        h->prev->next = NULL;
    }
}

