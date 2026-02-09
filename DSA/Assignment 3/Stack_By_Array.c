#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int capacity;
    int topIndex;
    int* stackArr;
} Stack_Array;

/* Constructor equivalent */
void initStack(Stack_Array* s, int capacity) {
    s->capacity = capacity;
    s->topIndex = -1;
    s->stackArr = (int*)malloc(sizeof(int) * capacity);
}

/* Print stack */
void print(Stack_Array* s) {
    if (s->topIndex == -1) {
        printf("The stack is empty\n");
        return;
    }
    for (int i = 0; i <= s->topIndex; i++) {
        printf("%d ", s->stackArr[i]);
    }
    printf("\n");
}

/* Push */
void push(Stack_Array* s, int x) {
    if (s->topIndex >= s->capacity - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->stackArr[++(s->topIndex)] = x;
}

/* Pop */
void pop(Stack_Array* s) {
    if (s->topIndex == -1)
        return;
    s->topIndex--;
}

/* Top */
int top(Stack_Array* s) {
    if (s->topIndex == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->stackArr[s->topIndex];
}

/* Size */
int size(Stack_Array* s) {
    return s->topIndex + 1;
}

int main() {
    Stack_Array s1;
    initStack(&s1, 10);

    print(&s1); // The stack is empty

    push(&s1, 1);
    print(&s1); // 1

    push(&s1, 2);
    print(&s1); // 1 2

    push(&s1, 3);
    print(&s1); // 1 2 3

    printf("%d\n", top(&s1));  // 3
    printf("%d\n", size(&s1)); // 3

    pop(&s1);
    printf("%d\n", size(&s1)); // 2
    print(&s1); // 1 2

    free(s1.stackArr); // cleanup
    return 0;
}
