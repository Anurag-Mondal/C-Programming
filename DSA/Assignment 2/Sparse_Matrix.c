#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int A[20][20] = {0}, B[20][20] = {0};
    int TA[21][3], TB[21][3], BT[21][3], TC[400][3];
    int i, j, k, count;

    count = 0;
    while (count < 20) {
        int r = rand() % 20;
        int c = rand() % 20;
        if (A[r][c] == 0) {
            A[r][c] = rand() % 9 + 1;
            count++;
        }
    }
    count = 0;
    while (count < 20) {
        int r = rand() % 20;
        int c = rand() % 20;
        if (B[r][c] == 0) {
            B[r][c] = rand() % 9 + 1;
            count++;
        }
    }
    k = 1;
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            if (A[i][j] != 0) {
                TA[k][0] = i;
                TA[k][1] = j;
                TA[k][2] = A[i][j];
                k++;
            }
        }
    }
    TA[0][0] = 20; TA[0][1] = 20; TA[0][2] = k - 1;

    k = 1;
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            if (B[i][j] != 0) {
                TB[k][0] = i;
                TB[k][1] = j;
                TB[k][2] = B[i][j];
                k++;
            }
        }
    }
    TB[0][0] = 20; TB[0][1] = 20; TB[0][2] = k - 1;

    BT[0][0] = TB[0][1];
    BT[0][1] = TB[0][0];
    BT[0][2] = TB[0][2];

    k = 1;
    for (i = 0; i < TB[0][1]; i++) {
        for (j = 1; j <= TB[0][2]; j++) {
            if (TB[j][1] == i) {
                BT[k][0] = TB[j][1];
                BT[k][1] = TB[j][0];
                BT[k][2] = TB[j][2];
                k++;
            }
        }
    }

    TC[0][0] = TA[0][0];
    TC[0][1] = TB[0][1];
    int a = 1, b, c = 1;
    while (a <= TA[0][2]) {
        int rowA = TA[a][0];
        b = 1;
        while (b <= BT[0][2]) {
            int colB = BT[b][0];
            int sum = 0;
            int a1 = a, b1 = b;
            while (a1 <= TA[0][2] && TA[a1][0] == rowA &&
                   b1 <= BT[0][2] && BT[b1][0] == colB) {
                if (TA[a1][1] < BT[b1][1]) a1++;
                else if (TA[a1][1] > BT[b1][1]) b1++;
                else {
                    sum += TA[a1][2] * BT[b1][2]; a1++; b1++;
                }
            }
            if (sum != 0) {
                TC[c][0] = rowA;
                TC[c][1] = colB;
                TC[c][2] = sum;
                c++;
            }

            while (b <= BT[0][2] && BT[b][0] == colB) b++;
        }
        while (a <= TA[0][2] && TA[a][0] == rowA) a++;
    }
    TC[0][2] = c - 1;

    printf("\nSparse representation of matrix A\n");
    for (i = 0; i <= TA[0][2]; i++)printf("%3d  %3d  %3d\n", TA[i][0], TA[i][1], TA[i][2]);

    printf("\nSparse representation of matrix B\n");
    for (i = 0; i <= TB[0][2]; i++) printf("%3d  %3d  %3d\n", TB[i][0], TB[i][1], TB[i][2]);

    printf("\nSparse representation of matrix C = A x B\n");
    for (i = 0; i <= TC[0][2]; i++) printf("%3d  %3d  %3d\n", TC[i][0], TC[i][1], TC[i][2]);
}