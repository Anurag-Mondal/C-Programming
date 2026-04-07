#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int stack[100], top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int isEmpty() {
    if (top == -1) return 1;
    else return 0;
}

void dfs(struct Node* adj[100], int n, int start) {
    int visited[100] = {0};

    push(start);

    while (!isEmpty()) {
        int node = pop();

        if (visited[node] == 0) {
            printf("%d ", node);
            visited[node] = 1;

            struct Node* temp = adj[node];
            while (temp != NULL) {
                if (visited[temp->data] == 0) {
                    push(temp->data);
                }
                temp = temp->next;
            }
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

    dfs(adj, V, 0);

    return 0;
}