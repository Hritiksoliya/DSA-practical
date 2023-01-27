#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 10

int queue[MAX_QUEUE_SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX_QUEUE_SIZE - 1) {
        printf("Error: Queue is full.\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    queue[++rear] = value;
    printf("%d enqueued to queue.\n", value);
}

void dequeue() {
    if (front == -1) {
        printf("Error: Queue is empty.\n");
        return;
    }
    printf("%d dequeued from queue.\n", queue[front]);
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front++;
    }
}

void display() {
    if (front == -1) {
        printf("Error: Queue is empty.\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    return 0;
}
