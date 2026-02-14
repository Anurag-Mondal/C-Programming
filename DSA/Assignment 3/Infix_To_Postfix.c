#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int priority(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

int applyOperator(int a, int b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return a / b;
    if (op == '^') {
        int result = 1;
        for (int i = 0; i < b; i++)
            result *= a;
        return result;
    }
    return 0;
}

void infixToPostfix(char s[], char ans[]) {
    char st[100];
    int top = -1;
    int k = 0;

    for (int i = 0; i < strlen(s); i++) {

        if (isdigit(s[i])) {
            ans[k++] = s[i];
        }

        else if (s[i] == '(') {
            st[++top] = '(';
        }

        else if (s[i] == ')') {
            while (top != -1 && st[top] != '(') {
                ans[k++] = st[top--];
            }
            top--;
        }

        else {
            while (top != -1 && priority(s[i]) <= priority(st[top])) {
                ans[k++] = st[top--];
            }
            st[++top] = s[i];
        }
    }

    while (top != -1) {
        ans[k++] = st[top--];
    }

    ans[k] = '\0';
}

int evaluatePostfix(char postfix[]) {
    int st[100];
    int top = -1;

    for (int i = 0; i < strlen(postfix); i++) {

        if (isdigit(postfix[i])) {
            st[++top] = postfix[i] - '0';
        }

        else {
            int b = st[top--];
            int a = st[top--];
            int result = applyOperator(a, b, postfix[i]);
            st[++top] = result;
        }
    }
    return st[top];
}

int main() {
    char exp[] = "(3+4)*(5-2)";
    char postfix[100];

    printf("Infix expression: %s\n", exp);

    infixToPostfix(exp, postfix);
    printf("Postfix expression: %s\n", postfix);

    int result = evaluatePostfix(postfix);
    printf("Evaluation result: %d\n", result);

    return 0;
}