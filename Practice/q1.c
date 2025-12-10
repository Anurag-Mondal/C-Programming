#include <stdio.h>

int fibonacci (int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int f = (fibonacci(i) * fibonacci(i)) + (10 * fibonacci(i));
        sum += f;
    }

    printf("%d", sum);

    return 0;
}