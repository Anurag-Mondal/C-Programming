// 1st Method (My Original)

// #include <stdio.h>
// int main () {
//     int n;                                 // n = number of horizontal lines
//     printf ("Enter an odd number: ");
//     scanf ("%d",&n);
//     printf ("\n");

//     int m = (n-1);
//     int nsp = 1;
//     int nst = m;
//     int nst_= m;

//     for (int b = 1; b<=2*m+1; b++) {
//         printf ("%d ",b);
//     }
//     printf ("\n");

//     for (int i = 1; i<=m; i++) {

//         for (int j = 1; j <= nst; j++) {
//             printf ("%d ",j);
//         }
//         nst--;
        
//         for (int k = 1; k <= nsp; k++) {
//             printf ("  ");
//         }
//         nsp+=2;
        
//         for (int k = (n-i) + (2*i); k <= 2*n-1; k++) {
//             printf ("%d ",k);
//         }
        

//         printf ("\n");
//     }
//     return 0;
// }

// 2nd Method (Better)

#include <stdio.h>
int main () {
    int n;                                 // n = number of horizontal lines
    printf ("Enter an odd number: ");
    scanf ("%d",&n);
    printf ("\n");

    // 1234 6789
    // 123   780
    // 12     89
    // 1       9

    int m = (n-1);
    int nsp = 1;
    int nst = m;
    int nst_= m;

    for (int b = 1; b<=2*m+1; b++) {
        printf ("%d",b);
    }
    printf ("\n");

    for (int i = 1; i<=m; i++) {

        int a = 1;
        for (int j = 1; j <= nst; j++) {
            printf ("%d",a);
            a++;
        }
        nst--;
        
        for (int k = 1; k <= nsp; k++) {
            printf (" ");
            a++;                // -------> ******SEEEEEE******
        }
        nsp+=2;
        
        for (int k = 1; k <= nst_; k++) {
            printf ("%d",a);
            a++;
        }
        nst_--;
        

        printf ("\n");
    }
    return 0;
}