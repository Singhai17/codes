#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct Queue {
    int arr[MAX_SIZE];
    int front;
    int rear;
};

void initQueue(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(struct Queue* q) {
    return (q->rear == MAX_SIZE - 1);
}

int isEmpty(struct Queue* q) {
    return (q->front == -1);
}

void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Queue is full. Cannot enqueue %d\n", value);
    } else {
        if (q->front == -1) {
            q->front = 0;
        }
        q->rear++;
        q->arr[q->rear] = value;
        printf("Enqueued %d\n", value);
    }
}

void displayQueue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    displayQueue(&q);

    enqueue(&q, 60);

    return 0;
}

