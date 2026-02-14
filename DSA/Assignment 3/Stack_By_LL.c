#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
} Stack;

void Start_Stack(Stack* s) {
    s->top = NULL;
}

void push(Stack* s, int x) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = s->top;
    s->top = temp;
}

void Print(Stack* s) {
    Node* copy = s->top;
    if (copy == NULL) {
        printf("The stack is empty\n\n");
        return;
    }
    while (copy) {
        printf("%d ", copy->data);
        copy = copy->next;
    }
    printf("\n\n");
}

int peak(Stack* s) {
    if (s->top == NULL) {
        printf("Stack is empty!\n\n");
        return -1;
    }
    return s->top->data;
}

void pop(Stack* s) {
    if (s->top == NULL) {
        printf("Stack is empty!\n\n");
        return;
    }
    Node* temp = s->top;
    s->top = s->top->next;
    free(temp);
}

int Size_Stack(Stack* s) {
    if (s->top == NULL) {
        return 0;
    }
    Node* temp = s->top;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void is_Empty(Stack* s) {
    if (s->top == NULL)
        printf("Yes\n\n");
    else
        printf("No\n\n");
}

int main() {
    Stack s1;
    Start_Stack(&s1);

    int choice;
    printf("Press 1 to push\nPress 2 to pop\nPress 3 to top\nPress 4 for size\nPress 5 to check if empty\nPress 6 to print all\nPress 0 to exit\n\n");
    scanf("%d",&choice);
    printf("\n");

    while (choice != 0) {
        int a;
        switch (choice) {
        case 1:
            printf("Enter element to push: "); 
            scanf ("%d",&a);
            push(&s1,a);
            printf("\n");
            break;

        case 2:
            pop(&s1);
            break;

        case 3:
            printf("%d\n\n", peak(&s1));
            break;

        case 4:
            printf("%d\n\n", Size_Stack(&s1));
            break;

        case 5:
            is_Empty(&s1);
            break;

        case 6:
            Print(&s1);
            break;

        default:
            printf("Invalid input\n\n");
            break;
        }

        printf("Press 1 to push\nPress 2 to pop\nPress 3 to top\nPress 4 for size\nPress 5 to check if empty\nPress 6 to print all\nPress 0 to exit\n\n");
        scanf("%d",&choice);
    }

    return 0;
}