#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

Node* insert_Head(Node* head, int n) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }
    node->data = n;
    node->prev = NULL;
    node->next = head;

    if (head != NULL) head->prev = node;
    return node;
}

Node* insert_Tail(Node* head, int n) {
    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }
    node->data = n;
    node->next = NULL;

    if (head == NULL) {
        node->prev = NULL;
        return node;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;

    return head;
}

Node* insert_after_Kth_node(Node* head, int n, int m) {
    if (n < 1) {
        printf("Invalid position\n");
        return head;
    }
    if (head == NULL) {
        printf("Linked List is empty\n");
        return head;
    }

    int count = 1;
    Node* temp = head;
    while (temp != NULL) {
        if (count == n) break;
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Invalid Position\n");
        return head;
    }

    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }

    node->data = m;
    node->next = temp->next;
    node->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = node;

    temp->next = node;

    return head;
}

Node* deleteHead(Node* head) {
    if (head == NULL) return head;

    Node* temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    free(temp);
    return head;
}

Node* deleteTail(Node* head) {
    if (head == NULL || head->next == NULL)
        return deleteHead(head);

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    free(temp);

    return head;
}

Node* delete_el_at_k(Node* head, int k) {
    if (k <= 0) {
        printf("Invalid element position\n");
        return head;
    }
    if (head == NULL) return head;

    if (k == 1) {
        return deleteHead(head);
    }

    int count = 1;
    Node* temp = head;

    while (temp != NULL && count < k) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Invalid Position\n");
        return head;
    }

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    temp->prev->next = temp->next;
    free(temp);

    return head;
}

void Print(Node* head) {
    if (head == NULL) {
        printf("Linked List is empty\n");
    }
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;
    head = insert_Head(head, 5);
    Print(head); // 5
    head = insert_Tail(head, 6);
    Print(head); // 5 6
    head = insert_after_Kth_node(head, 2, 7);
    Print(head); // 5 6 7

    head = deleteHead(head);
    Print(head); // 6 7
    head = deleteTail(head);
    Print(head); // 6
    head = delete_el_at_k(head, 1);
    Print(head); // Linked List is empty
    return 0;
}