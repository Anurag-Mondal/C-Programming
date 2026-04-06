#include <stdio.h>

#define MAX 100

int stack[MAX], top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int isEmpty() {
    return top == -1;
}

void dfs(int adj[MAX][MAX], int n, int start) {
    int visited[MAX] = {0};

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
    int n = 5;

    int adj[MAX][MAX] = {
        {0,1,1,0,0},
        {1,0,0,1,1},
        {1,0,0,0,0},
        {0,1,0,0,0},
        {0,1,0,0,0}
    };

    dfs(adj, n, 0);

    return 0;
}