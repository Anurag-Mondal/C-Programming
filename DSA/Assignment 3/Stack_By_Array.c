#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int capacity;
    int topIndex;
    int* stackArr;
} Stack_Array;

void start_Stack(Stack_Array* s, int capacity) {
    s->capacity = capacity;
    s->topIndex = -1;
    s->stackArr = (int*)malloc(sizeof(int) * capacity);
}

void push(Stack_Array* s, int x) {
    if (s->topIndex >= s->capacity - 1) {
        printf("Stack Overflow\n\n");
        return;
    }
    s->stackArr[++(s->topIndex)] = x;
}

void pop(Stack_Array* s) {
    if (s->topIndex == -1) {
        printf("Stack Underflow\n\n");
        return;
    }
    s->topIndex--;
}

void peak(Stack_Array* s) {
    if (s->topIndex == -1) {
        printf("Stack is empty\n\n");
        return;
    }
    printf("%d\n\n", s->stackArr[s->topIndex]);
}

void Stack_Size(Stack_Array* s) {
    printf("%d\n\n", s->topIndex + 1);
}

void is_Empty(Stack_Array* s) {
    if (s->topIndex == -1)
        printf("Yes\n\n");
    else
        printf("No\n\n");
}

void is_Full(Stack_Array* s) {
    if (s->topIndex == s->capacity - 1)
        printf("Yes\n\n");
    else
        printf("No\n\n");
}

void Print(Stack_Array* s) {
    if (s->topIndex == -1) {
        printf("Stack is empty\n\n");
        return;
    }
    for (int i = 0; i <= s->topIndex; i++) {
        printf("%d ", s->stackArr[i]);
    }
    printf("\n\n");
}

int main() {
    Stack_Array s1;
    int n; 
    printf("Enter size of stack: ");
    scanf("%d", &n);

    start_Stack(&s1, n);

    int choice;
    printf("Press 1 to push\nPress 2 to pop\nPress 3 to top\nPress 4 for size\nPress 5 to check if empty\nPress 6 to check if full\nPress 7 to print all\nPress 0 to exit\n\n");
    scanf("%d", &choice);
    printf("\n");

    while (choice != 0) {
        int a;
        switch (choice) {
        case 1:
            printf("Enter element to push: "); 
            scanf("%d", &a);
            push(&s1, a);
            printf("\n");
            break;

        case 2:
            pop(&s1);
            break;

        case 3:
            peak(&s1);
            break;

        case 4:
            Stack_Size(&s1);
            break;

        case 5:
            is_Empty(&s1);
            break;

        case 6:
            is_Full(&s1);
            break;

        case 7:
            Print(&s1);
            break;

        default:
            printf("Invalid input\n\n");
            break;
        }

        printf("Press 1 to push\nPress 2 to pop\nPress 3 to top\nPress 4 for size\nPress 5 to check if empty\nPress 6 to check if full\nPress 7 to print all\nPress 0 to exit\n\n");
        scanf("%d", &choice);
    }

    free(s1.stackArr);
    return 0;
}