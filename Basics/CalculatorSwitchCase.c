#include <stdio.h>
int main () {
    int a,b;
    printf ("ENTER a : ");
    scanf ("%d",&a);

    char ch;
    printf ("ENTER +/-/*/ / : ");
    scanf (" %c",&ch); // space before %c is needed 

    printf ("ENTER b : ");
    scanf ("%d",&b);

    switch (ch) {
    case '+':
        printf ("%d",(a+b));
        break;
    case '-':
        printf ("%d",(a-b));
        break;
    case '*':
        printf ("%d",(a*b));
        break;
    case '/':
        printf ("%d",(a/b));
        break;  
    default:
        printf ("Not a valid operator");
        break;
    }
    return 0;
}