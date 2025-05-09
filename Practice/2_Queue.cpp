#include<iostream>
/*
a queue is a linear data structure that works on the First In, First Out (FIFO) principle.
In this structure, the first element inserted is the first one to be removed, just like a line of people at a bank counter — the person who joins the line first is served first.
The basic operations in a queue include push or enqueue (to add an element at the rear), pop or dequeue (to remove the front element), front (to view the front element), and back (to view the rear element). 
Like stacks, queues also support size and empty functions. */
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int item){
        data = item;
        next = NULL;
    }
};

struct Queue{
    Node *head = NULL;
    Node *tail = NULL;
    
    int cnt = 0;

    void push(int item);
    void pop();
    void frontElement();
    void rearElement();
    int size();
    bool empty();
};

void Queue:: push(int data){ // First IN FIRST OUT
    Node *n = new Node(data);

    if(head == NULL){
        head = tail = n; // lL empty means when a node will enter, the node will be the head and tail both
    }else{
        tail->next = n;
        tail = n; // So the tail traverse but the head fix at its 1st value
    }
    cnt++;
}

void Queue:: pop(){
    if(head == NULL){
        cout << "List is Empty" << endl;
    }else{
        Node *temp = head;
        head = head->next;
        delete temp;
        cnt--;
    }
}

void Queue:: frontElement(){
    if(head==NULL){
        cout << "List is Empty" << endl;
    }else{
        cout<< head->data << endl;
    }
}

void Queue:: rearElement(){
    if(head==NULL){
        cout << "List is Empty" << endl;
    }else{
        cout << tail->data << endl;
    }
}

int Queue:: size(){
    return cnt;
}

bool Queue:: empty(){
    return head == NULL;
}
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: "; q.frontElement();   // 10
    cout << "Rear: "; q.rearElement();     // 30
    cout << "Size: " << q.size() << endl;  // 3

    q.pop(); // removes 10
    cout << "After pop, Front: "; q.frontElement(); // 20

    return 0;
}
