#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char name[50];
    int priority;
    struct Node* next;
};

struct Node* front = NULL;

void insert() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter patient name: ");
    scanf("%s", newNode->name);

    printf("Enter priority (1-Critical, 2-Serious, 3-Stable): ");
    scanf("%d", &newNode->priority);

    newNode->next = NULL;

    if (front == NULL || newNode->priority < front->priority) {
        newNode->next = front;
        front = newNode;
    }
    else {
        struct Node* temp = front;

        while (temp->next != NULL && temp->next->priority <= newNode->priority) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("Patient added successfully\n");
}

void treat() {
    if (front == NULL) {
        printf("No patients in queue\n");
        return;
    }

    struct Node* temp = front;

    printf("Treating patient: %s (Priority %d)\n",
           temp->name, temp->priority);

    front = front->next;
    free(temp);
}

void display() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct Node* temp = front;

    printf("\nCurrent Patient Queue:\n");
    while (temp != NULL) {
        printf("%s (Priority %d)\n", temp->name, temp->priority);
        temp = temp->next;
    }
}
int main() {
    int choice;

    while (1) {
        printf("\n1.Insert Patient\n2.Treat Patient\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                treat();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}