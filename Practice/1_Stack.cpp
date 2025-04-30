#include<iostream>
/*A stack is a linear data structure that follows the Last In, First Out (LIFO) principle.
This means that the last element inserted into the stack will be the first one to be removed.
Think of it like a stack of books — the book placed last on the top is the one removed first.
The main operations of a stack are push (to insert an element), pop (to remove the top element), and top or peek (to view the top element without removing it). 
Other helpful functions include size to get the number of elements and empty to check if the stack is empty. */
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int item){
        data = item;
        next = NULL;
    }
};

struct Stack{
    Node *head = NULL;
    int cnt = 0;

    void push(int item);
    void pop();
    int size();
    int top();
    bool empty();
};

void Stack:: push(int item){
    Node *n = new Node(item);

    if(head == NULL){
        head = n;
    }
    else{
        n->next = head;
        head = n;
    }
    cnt++;
}

void Stack:: pop(){
    if(head == NULL) cout << "Empty Stack" << endl;
    else{
        Node *temp = head;
        head = head->next;
        delete temp;
        cnt--;
    }
}

int Stack :: size(){
    return cnt;
}

int Stack:: top(){

    if(head == NULL){
        cout << "Empty Stack <3" << endl;
        return -1;
    }else{
        return head->data;
    }
}

bool Stack:: empty(){
    return head == NULL;
}

int main(){

    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    cout << "Top of the stack: " << st.top() << endl;
    cout << "Size of the stack: " << st.size() << endl;


    st.pop();
    cout << "Top of the stack after pop: " << st.top() << endl;

    return 0;
}