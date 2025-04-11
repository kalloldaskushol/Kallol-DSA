#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

struct Queue {
    Node* front = NULL;
    Node* rear = NULL;
    int count = 0;

    void push(int value);
    void pop();
    int frontElement();
    int backElement();
    int size();
    bool empty();
};

void Queue::push(int value) {
    Node* newNode = new Node(value);
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    count++;
}

void Queue::pop() {
    if (front == NULL) {
        cout << "Queue is empty." << endl;
    } else {
        Node* temp = front;
        front = front->next;
        if (front == NULL) rear = NULL;
        delete temp;
        count--;
    }
}

int Queue::frontElement() {
    if (front != NULL) return front->data;
    cout << "Queue is empty." << endl;
    return -1;
}

int Queue::backElement() {
    if (rear != NULL) return rear->data;
    cout << "Queue is empty." << endl;
    return -1;
}

int Queue::size() {
    return count;
}

bool Queue::empty() {
    return front == NULL;
}

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.frontElement() << endl;
    cout << "Back: " << q.backElement() << endl;
    cout << "Size: " << q.size() << endl;

    q.pop();
    cout << "After pop, Front: " << q.frontElement() << endl;

    cout << (q.empty() ? "Queue is empty" : "Queue is not empty") << endl;

    return 0;
}
