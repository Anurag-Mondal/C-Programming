#include <stdio.h>

int main() {
   
    int n;
    printf ("Enter a number: ");
    scanf ("%d",&n);

    int sum = 0;

    while (n != 0) {

        sum = sum + n;
        printf ("The sum is: %d\n",sum);
        printf ("Enter a number: ");
        scanf ("%d",&n);

    }

    printf ("The sum is: %d\nCalculation ends here.",sum);
    
    return 0;
}