// Write a program to implement circular queue
#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of the circular queue

typedef struct {
    int front, rear;
    int arr[MAX]; // Array to store queue elements
} CircularQueue;

// Function to initialize the circular queue
void initQueue(CircularQueue *q) {
    q->front = -1; // Initialize front
    q->rear = -1;  // Initialize rear
}

// Function to check if the queue is empty
int isEmpty(CircularQueue *q) {
    return (q->front == -1);
}

// Function to check if the queue is full
int isFull(CircularQueue *q) {
    return ((q->rear + 1) % MAX == q->front);
}

// Function to add an element to the queue (enqueue operation)
void enqueue(CircularQueue *q, int x) {
    if (isFull(q)) {
        printf("Queue Overflow\n");
    } else {
        if (q->front == -1) q->front = 0; // Set front to 0 if queue is empty
        q->rear = (q->rear + 1) % MAX;    // Circular increment of rear
        q->arr[q->rear] = x;
        printf("%d enqueued into queue\n", x);
    }
}

// Function to remove an element from the queue (dequeue operation)
void dequeue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
    } else {
        printf("%d dequeued from queue\n", q->arr[q->front]);
        if (q->front == q->rear) {
            // Reset the queue if it becomes empty
            q->front = q->rear = -1;
        } else {
            q->front = (q->front + 1) % MAX; // Circular increment of front
        }
    }
}

// Function to get the front element of the queue
int peek(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is Empty\n");
        return -1;
    } else {
        return q->arr[q->front];
    }
}

// Function to display all elements in the queue
void display(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue elements are: ");
        int i = q->front;
        while (1) {
            printf("%d ", q->arr[i]);
            if (i == q->rear) break; // Stop when we reach rear
            i = (i + 1) % MAX; // Circular increment
        }
        printf("\n");
    }
}

int main() {
    CircularQueue queue;
    initQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    enqueue(&queue, 40);
    enqueue(&queue, 50);

    display(&queue);

    dequeue(&queue);
    display(&queue);

    enqueue(&queue, 60); // Attempting to enqueue when queue is full
    display(&queue);

    printf("Front element is: %d\n", peek(&queue));

    return 0;
}
3