#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct QNode {
    int data;
    struct QNode* next;
};

struct QNode *front = NULL, *rear = NULL;

struct Node* createNode(int v) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = v;
    newNode->next = NULL;
    return newNode;
}

void enqueue(int value) {
    struct QNode* temp = (struct QNode*)malloc(sizeof(struct QNode));
    temp->data = value;
    temp->next = NULL;

    if (rear == NULL) {
        front = rear = temp;
        return;
    }

    rear->next = temp;
    rear = temp;
}

int dequeue() {
    if (front == NULL)
        return -1;

    struct QNode* temp = front;
    int value = temp->data;

    front = front->next;
    if (front == NULL)
        rear = NULL;

    free(temp);
    return value;
}

void addEdge(struct Node* adj[], int u, int v) {
    struct Node* newNode = createNode(v);
    newNode->next = adj[u];
    adj[u] = newNode;

    newNode = createNode(u);
    newNode->next = adj[v];
    adj[v] = newNode;
}

void BFS(struct Node* adj[], int n, int start) {
    int visited[n];

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    enqueue(start);
    visited[start] = 1;

    printf("BFS Traversal: ");

    while (front != NULL) {
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
    int n, edges;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    struct Node* adj[n];

    for (int i = 0; i < n; i++)
        adj[i] = NULL;

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    for (int i = 0; i < edges; i++) {
        int u, v;
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);
        addEdge(adj, u, v);
    }

    int start;
    printf("Enter starting vertex: ");
    scanf("%d", &start);

    BFS(adj, n, start);

    return 0;
}