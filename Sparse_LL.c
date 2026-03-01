#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int row;
    int col;
    int value;
    struct Node* next;
} Node;
void push (Node** start, int row, int col, int value) {
    Node* new = (Node*)malloc(sizeof(Node));
    new->next = NULL;
    new->row = row;
    new->col = col;
    new->value = value;

    if (*start == NULL) {
        *start = new;
        return;
    }
    Node* temp = *start;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = new;
    return;
}
void printList(Node* start) {
    Node* temp = start;
    while (temp != NULL) {
        printf("Row: %d Col: %d Val: %d\n",
               temp->row, temp->col, temp->value);
        temp = temp->next;
    }
}
int main () {
    int matrix[4][5] = {
        {0,0,3,0,4},
        {0,0,5,7,0},
        {0,0,0,0,0},
        {0,2,6,0,0}
    };
    Node* start = NULL;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] != 0) {
                push(&start, i, j, matrix[i][j]);
            }
        }
    }
    printList(start);
    return 0;
}