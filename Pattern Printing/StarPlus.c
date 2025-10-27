#include <stdio.h>

int main() {
    int n;
    printf("Enter a number :");
    scanf("%d", & n);
    printf("\n\n");

    if (n % 2 == 1) {
        for (int i = 1; i <= n; i++) {

            if (i != (n + 1) / 2) {

                for (int j = 1; j <= n; j++) {

                    if (j == (n + 1) / 2) {
                        printf("*");
                    }
                    else {
                        printf(" ");
                    }
                }
                printf("\n");

            }


            if (i == (n + 1) / 2) {

                for (int j = 1; j <= n; j++) {

                    printf("*");
                }
                printf("\n");

            }

        }
    }

    if (n % 2 == 0) {
        printf("Enter a positive odd number");
    }

    return 0;
}