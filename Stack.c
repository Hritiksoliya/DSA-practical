#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int stack[MAX_SIZE], top = -1;

void push(int x) {
    if (top == MAX_SIZE - 1) {
        printf("Error: stack overflow\n");
        return;
    }
    top++;
    stack[top] = x;
}

void pop() {
    if (top == -1) {
        printf("Error: no elements to pop\n");
        return;
    }
    top--;
}

int peek() {
    return stack[top];
}

int main() {
    push(1);
    push(2);
    push(3);
    printf("%d\n", peek());
    pop();
    printf("%d\n", peek());
    pop();
    printf("%d\n", peek());
    pop();
    return 0;
}
