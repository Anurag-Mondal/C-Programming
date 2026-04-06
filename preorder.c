#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* right;
    struct Node* left;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void print(struct Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    print(root->left);
    print(root->right);
}

int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    root->right->left = createNode(7);
    root->right->right = createNode(8);

    root->left->right->left = createNode(6);

    root->right->right->left = createNode(9);
    root->right->right->right = createNode(10);

    print(root);

    return 0;
}