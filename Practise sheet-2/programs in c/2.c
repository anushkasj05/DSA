// 2. Write a program to implement linear queue
#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Maximum size of the queue

typedef struct {
    int front, rear;
    int arr[MAX]; // Array to store queue elements
} Queue;

// Function to initialize the queue
void initQueue(Queue *q) {
    q->front = -1; // Initialize front
    q->rear = -1;  // Initialize rear
}

// Function to check if the queue is empty
int isEmpty(Queue *q) {
    return (q->front == -1 || q->front > q->rear);
}

// Function to check if the queue is full
int isFull(Queue *q) {
    return (q->rear == MAX - 1);
}

// Function to add an element to the queue (enqueue operation)
void enqueue(Queue *q, int x) {
    if (isFull(q)) {
        printf("Queue Overflow\n");
    } else {
        if (q->front == -1) q->front = 0; // Set front to 0 if queue is empty
        q->arr[++(q->rear)] = x;
        printf("%d enqueued into queue\n", x);
    }
}

// Function to remove an element from the queue (dequeue operation)
void dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
    } else {
        printf("%d dequeued from queue\n", q->arr[q->front++]);
        if (q->front > q->rear) {
            q->front = q->rear = -1; // Reset queue if it becomes empty
        }
    }
}

// Function to get the front element of the queue
int peek(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is Empty\n");
        return -1;
    } else {
        return q->arr[q->front];
    }
}

// Function to display all elements in the queue
void display(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue elements are: ");
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    Queue queue;
    initQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    display(&queue);

    dequeue(&queue);
    display(&queue);

    printf("Front element is: %d\n", peek(&queue));

    return 0;
}
