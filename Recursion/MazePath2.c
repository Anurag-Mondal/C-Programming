#include <stdio.h>
int maze2 (int cr,int cc) {
    int rightways = 0;
    int downways = 0;
    if (cr == 1 && cc == 1) {
        return 1;
    }
    if (cr == 1) {
        rightways += maze2 (cr,cc-1);
    }
    if (cc == 1) {
        downways += maze2 (cr-1,cc);
    }
    if (cr > 1 && cc > 1) {
        rightways += maze2 (cr,cc-1);
        downways += maze2 (cr-1,cc);
    }
    

    int totalways = rightways + downways;
    return totalways;
}

int main () {
    int n,m ;
    printf ("Enter no. of rows: ");
    scanf ("%d",&n);
    printf ("Enter no. of columns: ");
    scanf ("%d",&m);
    int noOfways = maze2 (n,m);
    printf ("There are %d ways",noOfways);
    return 0;
}