#include <stdio.h>

int queue[100], front = -1, rear = -1;

void enqueue(int x) {
    if (front == -1) front = 0;
    queue[++rear] = x;
}

int dequeue() {
    return queue[front++];
}

int isEmpty() {
    return front == -1 || front > rear;
}

void bfs(int adj[100][100], int n, int start) {
    int visited[100] = {0};

    enqueue(start);
    visited[start] = 1;

    while (!isEmpty()) {
        int node = dequeue();
        printf("%d ", node);

        for (int i = 0; i < n; i++) {
            if (adj[node][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
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

    bfs(adj, V, 0);

    return 0;
}