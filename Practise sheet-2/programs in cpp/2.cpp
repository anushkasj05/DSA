// 2.	Write a program to implement linear queue.
#include <iostream>
using namespace std;

#define MAX 100 // Maximum size of the queue

class Queue {
    int front, rear;
    int arr[MAX]; // Array to store queue elements

public:
    Queue() {
        front = -1; // Initialize front
        rear = -1;  // Initialize rear
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    // Function to check if the queue is full
    bool isFull() {
        return (rear == MAX - 1);
    }

    // Function to add an element to the queue (enqueue operation)
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow\n";
        } else {
            if (front == -1) front = 0; // Set front to 0 if queue is empty
            arr[++rear] = x;
            cout << x << " enqueued into queue\n";
        }
    }

    // Function to remove an element from the queue (dequeue operation)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
        } else {
            cout << arr[front++] << " dequeued from queue\n";
            if (front > rear) {
                front = rear = -1; // Reset queue if it becomes empty
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
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    queue.display();

    queue.dequeue();
    queue.display();

    cout << "Front element is: " << queue.peek() << endl;

    return 0;
}
