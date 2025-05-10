#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = 0, rear = -1;

// Enqueue function
void enqueue(int value) {
    if (rear == SIZE - 1)
        printf("Queue Overflow\n");
    else
        queue[++rear] = value;
}

// Dequeue function
int dequeue() {
    if (front > rear) {
        printf("Queue Underflow\n");
        return -1;
    } else
        return queue[front++];
}

// Display queue
void display() {
    if (front > rear) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

// Main
int main() {
    enqueue(5);
    enqueue(10);
    enqueue(15);
    printf("Queue: ");
    display();

    printf("Dequeued: %d\n", dequeue());
    printf("Queue after dequeue: ");
    display();

    return 0;
}

