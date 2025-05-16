#include <iostream>
#define SIZE 100

using namespace std;

int queue[SIZE];
int front = 0, rear = -1;

// Enqueue function
void enqueue(int value) {
    if (rear == SIZE - 1)
        cout << "Queue Overflow" << endl;
    else
        queue[++rear] = value;
}

// Dequeue function
int dequeue() {
    if (front > rear) {
        cout << "Queue Underflow" << endl;
        return -1;
    } else
        return queue[front++];
}

// Display queue
void display() {
    if (front > rear) {
        cout << "Queue is empty" << endl;
        return;
    }
    for (int i = front; i <= rear; i++)
        cout << queue[i] << " ";
    cout << endl;
}

// Main function
int main() {
    enqueue(5);
    enqueue(10);
    enqueue(15);

    cout << "Queue: ";
    display();

    cout << "Dequeued: " << dequeue() << endl;

    cout << "Queue after dequeue: ";
    display();

    return 0;
}
