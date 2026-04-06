#include <stdio.h>
#include <stdlib.h>

void dfs(int adj[100][100], int visited[], int V, int v) {
    visited[v] = 1;
    for (int i = 0; i < V; i++) {
        if (adj[v][i] == 1 && visited[i] == 0) {
            dfs(adj, visited, V, i);
        }
    }
}

int main() {
    int V, E;
    scanf("%d %d", &V, &E);

    int adj[100][100] = {0};

    for (int i = 0; i < E; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        adj[u][v] = adj[v][u] = 1;
    }

    int visited[100] = {0};

    dfs(adj, visited, V, 0);

    for (int i = 0; i < V; i++) {
        if (visited[i] == 0) {
            printf("the tree is not connected");
            return 0;
        }
    }

    printf("the tree is connected");

    return 0;
}