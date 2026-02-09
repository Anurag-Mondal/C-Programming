#include <stdio.h>
#include <stdlib.h>

/* Node structure */
typedef struct Node {
    int data;
    struct Node* next;
} Node;

/* Stack structure */
typedef struct {
    Node* top;
} Stack;

/* Initialize stack (constructor equivalent) */
void initStack(Stack* s) {
    s->top = NULL;
}

/* Push */
void push(Stack* s, int x) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = s->top;
    s->top = temp;
}

/* Print stack */
void print(Stack* s) {
    Node* copy = s->top;
    if (copy == NULL) {
        printf("The stack is empty\n");
        return;
    }
    while (copy) {
        printf("%d ", copy->data);
        copy = copy->next;
    }
    printf("\n");
}

/* Top */
int Top(Stack* s) {
    if (s->top == NULL) {
        printf("Stack is empty!\n");
        return -1;
    }
    return s->top->data;
}

/* Pop */
void pop(Stack* s) {
    if (s->top == NULL) {
        printf("Stack is empty!\n");
        return;
    }
    Node* temp = s->top;
    s->top = s->top->next;
    temp->next = NULL;
    free(temp);
}

/* Size */
int size(Stack* s) {
    if (s->top == NULL) {
        printf("Stack is empty!\n");
        return -1;
    }
    Node* temp = s->top;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    Stack s1;
    initStack(&s1);

    print(&s1); // The stack is empty

    push(&s1, 1);
    print(&s1); // 1

    push(&s1, 2);
    print(&s1); // 1 2

    push(&s1, 3);
    print(&s1); // 1 2 3

    printf("%d\n", Top(&s1));   // 3
    printf("%d\n", size(&s1));  // 3

    pop(&s1);
    printf("%d\n", size(&s1));  // 2
    print(&s1); // 1 2

    return 0;
}