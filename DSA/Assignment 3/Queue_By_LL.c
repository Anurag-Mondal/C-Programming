#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* start;
    Node* end;
    int size;
} Queue;

void start_Queue(Queue* q) {
    q->start = NULL;
    q->end = NULL;
    q->size = 0;
}

void EnQueue(Queue* q, int x) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;

    if (q->size == 0) {
        q->start = temp;
        q->end = temp;
    } else {
        q->end->next = temp;
        q->end = temp;
    }
    q->size++;
}

void print(Queue* q) {
    if (q->size == 0) {
        printf("Queue is empty\n\n");
        return;
    }
    Node* temp = q->start;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n\n");
}

int peak(Queue* q) {
    if (q->size == 0) {
        printf("Queue is empty\n\n");
        return -1;
    }
    return q->start->data;
}

void DeQueue(Queue* q) {
    if (q->size == 0) {
        printf("Queue is empty\n\n");
        return;
    }

    Node* temp = q->start;
    q->start = q->start->next;

    if (q->start == NULL)
        q->end = NULL;

    free(temp);
    q->size--;
}

void is_empty(Queue* q) {
    if (q->size == 0)
        printf("Yes\n\n");
    else
        printf("No\n\n");
}

void rear(Queue* q) {
    if (q->size == 0) {
        printf("Queue is empty\n\n");
    }
    else 
        printf("%d\n\n",q->end->data);
}

int Size(Queue* q) {
    return q->size;
}

int main() {
    Queue q1;
    start_Queue(&q1);

    int choice;

    printf("Press 1 to EnQueue\nPress 2 to DeQueue\nPress 3 to Peak\nPress 4 for Size\nPress 5 to check if empty\nPress 6 to Print\nPress 7 for last element\nPress 0 to Exit\n\n");

    scanf("%d",&choice);
    printf("\n");

    while (choice != 0) {
        int a;
        switch (choice) {

        case 1:
            printf("Enter element to EnQueue: ");
            scanf("%d",&a);
            EnQueue(&q1,a);
            printf("\n");
            break;

        case 2:
            DeQueue(&q1);
            break;

        case 3:
            printf("%d\n\n", peak(&q1));
            break;

        case 4:
            printf("%d\n\n", Size(&q1));
            break;

        case 5:
            is_empty(&q1);
            break;

        case 6:
            print(&q1);
            break;
        
        case 7:
            rear(&q1);
            break;
        
        default:
            printf("Invalid input\n\n");
        }

        printf("Press 1 to EnQueue\nPress 2 to DeQueue\nPress 3 to Peak\nPress 4 for Size\nPress 5 to check if empty\nPress 6 to Print\nPress 7 for last element\nPress 0 to Exit\n\n");
        scanf("%d",&choice);
        printf("\n");
    }
    return 0;
}