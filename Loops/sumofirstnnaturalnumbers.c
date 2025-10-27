#include <stdio.h>
int main () {
    int n;
    printf ("Enter the no of terms upto which you want to calculate the sum :");
    scanf ("%d",&n);
    int sum = 0;
    for (int i = 1 ; i <= n ; i++ ) {
        sum = sum + i;
    }
    printf ("\nThe sum is %d",sum);
    return 0;
}