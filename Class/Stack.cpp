#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    
    Node(int d) {
        data = d;
        next = NULL;
    }
};

struct Stack {
    Node *head = NULL;
    int cnt = 0;

    void push(int d);
    void pop();
    int size();
    int top();
    bool empty();
};

void Stack::push(int d) {
    Node *n = new Node(d);
    if (head == NULL) {
        head = n;
    } else {
        n->next = head;
        head = n;
    }
    cnt++;
}

void Stack::pop() {
    if (head == NULL) {
        cout << "Stack is already empty." << endl;
    } else {
        Node *x = head;
        head = head->next;
        delete x;
        cnt--;
    }
}

int Stack::size() {
    return cnt;
}

int Stack::top() {
    if (head != NULL) {
        return head->data;
    } else {
        cout << "Stack is empty." << endl;
        return -1;  
    }
}

bool Stack::empty() {
    return head == NULL;  
}

int main() {
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