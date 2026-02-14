#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* insert(Node* head, int data) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        return head;
    }

    Node* copy = head;
    while (copy->next != NULL) {
        copy = copy->next;
    }
    copy->next = temp;
    return head;
}

void printList(Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

Node* reverseList(Node* head) {
    Node* previous = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;    
        current->next = previous;
        previous = current;      
        current = next;          
    }
    head = previous;
    return head;
}

int main() {
    Node* head = NULL;

    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);

    printf("Original List:\n");
    printList(head);

    head = reverseList(head);

    printf("Reversed List:\n");
    printList(head);

    return 0;
}