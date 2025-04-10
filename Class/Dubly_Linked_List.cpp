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


