#include <stdio.h>
#include <stdlib.h>

/* Node structure */
typedef struct Node {
    int data;
    struct Node* next;
} Node;

/* Queue structure */
typedef struct {
    Node* start;
    Node* end;
    int size;
} Queue;

/* Constructor equivalent */
void initQueue(Queue* q) {
    q->start = NULL;
    q->end = NULL;
    q->size = 0;
}

/* Push (enqueue) */
void push(Queue* q, int x) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;

    if (q->size == 0) {   // first element
        q->start = temp;
        q->end = temp;
        q->size++;
        return;
    }
    q->end->next = temp;
    q->end = temp;
    q->size++;
}

/* Print queue */
void print(Queue* q) {
    if (q->size == 0) {
        printf("Queue is empty\n");
        return;
    }
    Node* temp = q->start;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

/* Front element */
int top(Queue* q) {
    if (q->size == 0) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->start->data;
}

/* Pop (dequeue) */
void pop(Queue* q) {
    if (q->size == 0) {
        printf("Queue is empty\n");
        return;
    }

    if (q->size == 1) {
        free(q->start);
        q->start = NULL;
        q->end = NULL;
        q->size--;
        return;
    }

    Node* temp = q->start;
    q->start = q->start->next;
    free(temp);
    q->size--;
}

/* Size */
int Size(Queue* q) {
    return q->size;
}

int main() {
    Queue q1;
    initQueue(&q1);

    print(&q1); // Queue is empty

    push(&q1, 1);
    print(&q1); // 1

    push(&q1, 2);
    print(&q1); // 1 2

    push(&q1, 3);
    print(&q1); // 1 2 3

    printf("%d\n", top(&q1));   // 1
    printf("%d\n", Size(&q1));  // 3

    pop(&q1);
    printf("%d\n", top(&q1));   // 2
    printf("%d\n", Size(&q1));  // 2
    print(&q1);                 // 2 3

    return 0;
}