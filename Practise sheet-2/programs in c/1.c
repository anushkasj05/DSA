// 1.	Write a program to implement stack in c
#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // Maximum size of the stack

typedef struct Stack {
    int top;      // Index of the top element in the stack
    int arr[MAX]; // Array to hold stack elements
} Stack;

// Function to initialize the stack
void initStack(Stack *stack) {
    stack->top = -1; // Initialize top to -1
}

// Function to add an element to the stack (push operation)
void push(Stack *stack, int x) {
    if (stack->top >= MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack->arr[++stack->top] = x;
        printf("%d pushed into stack\n", x);
    }
}

// Function to remove an element from the stack (pop operation)
void pop(Stack *stack) {
    if (stack->top < 0) {
        printf("Stack Underflow\n");
    } else {
        int poppedElement = stack->arr[stack->top--];
        printf("%d popped from stack\n", poppedElement);
    }
}

// Function to get the top element of the stack
int peek(Stack *stack) {
    if (stack->top < 0) {
        printf("Stack is Empty\n");
        return -1;
    } else {
        return stack->arr[stack->top];
    }
}

// Function to check if the stack is empty
int isEmpty(Stack *stack) {
    return (stack->top < 0);
}

int main() {
    Stack stack;  // Create a stack object
    initStack(&stack); // Initialize the stack

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element is: %d\n", peek(&stack));

    pop(&stack);
    pop(&stack);

    if (isEmpty(&stack)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Define maximum size of stack

// Stack structure
struct Stack {
    int top;
    int items[MAX];
};

// Function to initialize the stack
void initStack(struct Stack* s) {
    s->top = -1;
}

// Function to check if the stack is full
int isFull(struct Stack* s) {
    return s->top == MAX - 1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* s) {
    return s->top == -1;
}

// Function to add an element to the stack
void push(struct Stack* s, int item) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
    } else {
        s->items[++(s->top)] = item;
        printf("%d pushed to stack\n", item);
    }
}

// Function to remove an element from the stack
int pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1; // Return an invalid value
    } else {
        return s->items[(s->top)--];
    }
}

// Function to display the stack
void display(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are: ");
        for (int i = s->top; i >= 0; i--) {
            printf("%d ", s->items[i]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    struct Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    display(&stack);
    
    printf("%d popped from stack\n", pop(&stack));
    display(&stack);

    return 0;
}
*/