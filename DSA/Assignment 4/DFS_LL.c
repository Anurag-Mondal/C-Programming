#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int v) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = v;
    newNode->next = NULL;
    return newNode;
}

void addEdge(struct Node* adj[], int u, int v) {
    struct Node* newNode = createNode(v);
    newNode->next = adj[u];
    adj[u] = newNode;

    newNode = createNode(u);
    newNode->next = adj[v];
    adj[v] = newNode;
}

void DFS(int node, struct Node* adj[], int visited[]) {
    printf("%d ", node);
    visited[node] = 1;

    struct Node* temp = adj[node];

    while (temp != NULL) {
        if (visited[temp->data] == 0) {
            DFS(temp->data, adj, visited);
        }
        temp = temp->next;
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

    int visited[n];
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    int start;
    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("DFS Traversal: ");
    DFS(start, adj, visited);

    return 0;
}