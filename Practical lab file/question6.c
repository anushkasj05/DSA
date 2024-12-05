#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void push(struct Node** top, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
}
int pop(struct Node** top) {
    if (*top == NULL) {
        return -1;
    }
    struct Node* temp = *top;
    int popped = temp->data;
    *top = temp->next;
    free(temp);
    return popped;
}
int peek(struct Node* top) {
    if (top == NULL) {
        return -1;
    }
    return top->data;
}
int main() {
    struct Node* top = NULL;
    int n, data;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        push(&top, data);
    }

    printf("%d\n", pop(&top));
    printf("%d\n", peek(top));

    return 0;
}
