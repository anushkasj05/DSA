#include <stdio.h>
#define MAX 100
struct Stack {
    int arr[MAX];
    int top;
};
void initStack(struct Stack* s) {
    s->top = -1;
}
int isFull(struct Stack* s) {
    return s->top == MAX - 1;
}
int isEmpty(struct Stack* s) {
    return s->top == -1;
}
void push(struct Stack* s, int data) {
    if (!isFull(s)) {
        s->arr[++(s->top)] = data;
    }
}
int pop(struct Stack* s) {
    if (!isEmpty(s)) {
        return s->arr[(s->top)--];
    }
    return -1;
}
int peek(struct Stack* s) {
    if (!isEmpty(s)) {
        return s->arr[s->top];
    }
    return -1;
}
int main() {
    struct Stack s;
    initStack(&s);
    int n, data;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        push(&s, data);
    }
    printf("%d\n", pop(&s));
    printf("%d\n", peek(&s));
    return 0;
}
