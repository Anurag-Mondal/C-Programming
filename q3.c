#include <stdio.h>
int d = 0;
void string (char strr[], int n) {
    if (n <= 0) return;

    int i = 0; int countt = 0; int start = d;

    while (strr[i + d] != ' ' && strr[i + d] != '\0') {
        countt++;
        i++;
    }

    d += (countt + 1);

    string (strr, n - (countt + 1));

    for (int j = start; j < start + countt; j++) {
        int t = (int)strr [j];

        if (t <= 90 && t >= 65) printf("%c", (char)(t+32));

        else if (t >= 97 && t <= 122) printf("%c", (char)(t-32));

        else printf ("%c", strr [j]);
    }

    printf(" ");
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    gets(str);

    int i = 0, count = 0;
    while (str[i] != '\0') {
        count++;
        i++;
    }

    string(str, count);

    return 0;
}