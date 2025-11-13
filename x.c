#include <stdio.h>

int factorial (int x) {
    if (x == 0) return 1;
    return x * factorial(x - 1);
}

void a (int* ans, int n) {
    *ans = factorial(n);
    return;
}

int main() {
    int n, ans;

    printf("Enter n: ");
    scanf("%d", &n);

    a (&ans, n);

    printf("Factorial = %d\n", ans);

    return 0;
}