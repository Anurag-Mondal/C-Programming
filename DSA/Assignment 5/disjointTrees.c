#include <stdio.h>
#include <stdlib.h>

void dfs(int adj[100][100], int visited[100], int V, int v) {
    visited[v] = 1;
    for (int i = 0; i < V; i++) {
        if (adj[v][i] == 1 && visited[i] == 0) {
            dfs(adj, visited, V, i);
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
        adj[v][u] = adj[u][v] = 1;
    }

    int visited[100] = {0};
    int count = 0;

    for (int i = 0; i < V; i++) {
        if (visited[i] == 0) {
            dfs(adj, visited, V, i);
            count++;
        }
    }

    printf("the number of the disjoint trees are : %d", count);

    return 0;
}