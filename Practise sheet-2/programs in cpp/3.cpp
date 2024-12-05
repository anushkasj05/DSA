// 3.	Write a program to implement circular queue.
#include <iostream>
using namespace std;

#define MAX 5 // Maximum size of the circular queue

class CircularQueue {
    int front, rear;
    int arr[MAX]; // Array to store queue elements

public:
    CircularQueue() {
        front = -1; // Initialize front
        rear = -1;  // Initialize rear
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Function to check if the queue is full
    bool isFull() {
        return ((rear + 1) % MAX == front);
    }

    // Function to add an element to the queue (enqueue operation)
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow\n";
        } else {
            if (front == -1) front = 0; // Set front to 0 if queue is empty
            rear = (rear + 1) % MAX;    // Circular increment of rear
            arr[rear] = x;
            cout << x << " enqueued into queue\n";
        }
    }

    // Function to remove an element from the queue (dequeue operation)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
        } else {
            cout << arr[front] << " dequeued from queue\n";
            if (front == rear) {
                // Reset the queue if it becomes empty
                front = rear = -1;
            } else {
                front = (front + 1) % MAX; // Circular increment of front
            }
        }
    }

    // Function to get the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return -1;
        } else {
            return arr[front];
        }
    }

    // Function to display all elements in the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
        } else {
            cout << "Queue elements are: ";
            int i = front;
            while (i != rear) {
                cout << arr[i] << " ";
                i = (i + 1) % MAX;
            }
            cout << arr[rear] << endl; // Print the last element (at rear)
        }
    }
};

int main() {
    CircularQueue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);

    queue.display();

    queue.dequeue();
    queue.display();

    queue.enqueue(60);
    queue.display();

    cout << "Front element is: " << queue.peek() << endl;

    return 0;
}