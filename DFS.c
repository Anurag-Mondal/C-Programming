#include <stdio.h>

int stack[100], top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int isEmpty() {
    return top == -1;
}

void dfs(int adj[100][100], int n, int start) {
    int visited[100] = {0};

    push(start);

    while (!isEmpty()) {
        int node = pop();

        if (!visited[node]) {
            printf("%d ", node);
            visited[node] = 1;

            for (int i = n - 1; i >= 0; i--) {
                if (adj[node][i] == 1 && !visited[i]) {
                    push(i);
                }
            }
        }
    }
}

int main() {
    int V, E;
    printf("enter the number of the vertices and edges respectively\n");
    scanf("%d %d", &V, &E);

    int adj[100][100] = {0};

    for (int i = 0; i < E; i++) {
        int u, v;
        printf("enter the vertices (u v) : ");
        scanf("%d %d", &u, &v);
        adj[u][v] = adj[v][u] = 1;
    }

    dfs(adj, V, 0);

    return 0;
}