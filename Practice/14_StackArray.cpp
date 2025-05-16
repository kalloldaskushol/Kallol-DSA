#include <iostream>
using namespace std;
#define SIZE 100

int stack[SIZE];
int top = -1;

// Push function
void push(int value) {
    if (top >= SIZE - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

// Pop function
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else
        return stack[top--];
}

// Display stack
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";

}

// Main
int main() {
    push(10);
    push(20);
    push(30);
    printf("Stack: ");
    display();

    printf("Popped: %d\n", pop());
    printf("Stack after pop: ");
    display();

    return 0;
}
