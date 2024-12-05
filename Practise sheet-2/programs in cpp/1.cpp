// 1.	Write a program to implement stack.
#include<iostream>
using namespace std;
#define MAX 100  // Maximum size of the stack

class Stack {
    int top;      // Index of the top element in the stack
    int arr[MAX]; // Array to hold stack elements

public:
    Stack() { top = -1; } // Constructor to initialize stack

    // Function to add an element to the stack (push operation)
    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
        }
    }

    // Function to remove an element from the stack (pop operation)
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
        } else {
            int poppedElement = arr[top--];
            cout << poppedElement << " popped from stack\n";
        }
    }

    // Function to get the top element of the stack
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return -1;
        } else {
            return arr[top];
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack stack;  // Create a stack object

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element is: " << stack.peek() << endl;

    stack.pop();
    stack.pop();

    if (stack.isEmpty()) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack is not empty\n";
    }

    return 0;
}
