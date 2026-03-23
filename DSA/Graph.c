#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int vertex;
    struct node *next;
};

// Adjacency list (array of pointers)
struct node *adj[10];

// Create a new node
struct node* createNode(int v) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Add edge (undirected graph)
void addEdge(int src, int dest) {
    struct node* newNode;

    // Add edge src -> dest
    newNode = createNode(dest);
    newNode->next = adj[src];
    adj[src] = newNode;

    // Add edge dest -> src
    newNode = createNode(src);
    newNode->next = adj[dest];
    adj[dest] = newNode;
}

// Print graph
void printGraph(int n) {
    for (int i = 0; i < n; i++) {
        struct node* temp = adj[i];

        printf("Vertex %d: ", i);

        while (temp != NULL) {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }

        printf("NULL\n");
    }
}

// Main function
int main() {
    int n = 5; // number of vertices

    // Initialize adjacency list
    for (int i = 0; i < n; i++) {
        adj[i] = NULL;
    }

    // Add edges
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 4);
    addEdge(3, 4);

    // Print the graph
    printGraph(n);

    return 0;
}