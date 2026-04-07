#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int queue[100], front = -1, rear = -1;

void enqueue(int x) {
    if (front == -1) front = 0;
    queue[++rear] = x;
}

int dequeue() {
    return queue[front++];
}

int isEmpty() {
    if (front == -1 || front > rear) return 1;
    else return 0;
}

void bfs(struct Node* adj[100], int n, int start) {
    int visited[100] = {0};

    enqueue(start);
    visited[start] = 1;

    while (!isEmpty()) {
        int node = dequeue();
        printf("%d ", node);

        struct Node* temp = adj[node];
        while (temp != NULL) {
            if (visited[temp->data] == 0) {
                enqueue(temp->data);
                visited[temp->data] = 1;
            }
            temp = temp->next;
        }
    }
}

int main() {
    int V, E;
    printf("enter the number of the vertices and edges respectively\n");
    scanf("%d %d", &V, &E);

    struct Node* adj[100] = {NULL};

    for (int i = 0; i < E; i++) {
        int u, v;
        printf("enter the vertices (u v) : ");
        scanf("%d %d", &u, &v);

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = v;
        newNode->next = adj[u];
        adj[u] = newNode;

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = u;
        newNode->next = adj[v];
        adj[v] = newNode;
    }

    bfs(adj, V, 0);

    return 0;
}