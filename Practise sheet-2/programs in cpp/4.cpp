// Write a program to implement Deque (Double Ended Queue).
#include<iostream>
using namespace std;
#define MAX 5 // Maximum size of the deque

class Deque {
    int arr[MAX];
    int front, rear;

public:
    Deque() {
        front = -1;
        rear = -1;
    }

    // Check if the deque is full
    bool isFull() {
        return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
    }

    // Check if the deque is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Insert element at the front
    void insertFront(int x) {
        if (isFull()) {
            cout << "Deque Overflow\n";
            return;
        }

        // If deque is initially empty
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        // Circularly move front to the previous position
        else if (front == 0)
            front = MAX - 1;
        else
            front--;

        arr[front] = x;
        cout << x << " inserted at front\n";
    }

    // Insert element at the rear
    void insertRear(int x) {
        if (isFull()) {
            cout << "Deque Overflow\n";
            return;
        }

        // If deque is initially empty
        if (front == -1) {
            front = 0;
            rear = 0;
        }
        // Circularly move rear to the next position
        else if (rear == MAX - 1)
            rear = 0;
        else
            rear++;

        arr[rear] = x;
        cout << x << " inserted at rear\n";
    }

    // Delete element from the front
    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque Underflow\n";
            return;
        }

        cout << arr[front] << " removed from front\n";

        // If the deque has only one element
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        // Circularly move front to the next position
        else if (front == MAX - 1)
            front = 0;
        else
            front++;
    }

    // Delete element from the rear
    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque Underflow\n";
            return;
        }

        cout << arr[rear] << " removed from rear\n";

        // If the deque has only one element
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        // Circularly move rear to the previous position
        else if (rear == 0)
            rear = MAX - 1;
        else
            rear--;
    }

    // Get the front element
    int getFront() {
        if (isEmpty()) {
            cout << "Deque is Empty\n";
            return -1;
        }
        return arr[front];
    }

    // Get the rear element
    int getRear() {
        if (isEmpty()) {
            cout << "Deque is Empty\n";
            return -1;
        }
        return arr[rear];
    }

    // Display the deque elements
    void display() {
        if (isEmpty()) {
            cout << "Deque is Empty\n";
            return;
      
        }
}
};
