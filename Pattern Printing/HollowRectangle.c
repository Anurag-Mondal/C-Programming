#include <stdio.h>

int main() {
    int n,m;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    printf("\nEnter number of columns : ");
    scanf("%d", &m);
    printf("\n\n");

        for (int i = 1; i <= n; i++) {

            if (i == 1 || i == n) {
                for (int j = 1; j <= m; j++) {
                    printf("*");
                }
                printf("\n");
            }
            
            else {
                 for (int j = 1; j <= m; j++) {
                    if (j == 1 || j == m) {
                        printf("*");
                    }
                    else { printf (" ");
                    } 
                }
                printf("\n");
            }
    }

    return 0;
}