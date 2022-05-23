#include <iostream>
#include <conio.h>
int main()
{
    int i, j, k, l, m;
    for (i=1; i<=6; i++) {
        for (j=6; j>=i; j--)
            printf(" ");
        for (k=1; k<=i; k++)
            printf("*");
        for (l=1; l<=i; l++)
            printf("*");
        for (m=5; m>=i; m--)
            printf("  ");
        for (k=1; k<=i; k++)
            printf("*");
        for (l=1; l<=i; l++)
            printf("*");
        printf("\n");
    }
    for (i=12; i>=1; i--) {
        for (j=12; j>=i; j--)
            printf(" ");
        for (l=1; l<=i; l++)
            printf("*");
        for (m=i; m>=2; m--)
            printf("*");
        printf("\n");
    }
    printf("\n------ I  L O V E  Y O U  M U M ------");
    return 0;
}
