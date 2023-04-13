#include <stdio.h>
#include <stdlib.h>
#include "error.h"
int main() {
    int a[100], b[100], siz, n;
    printf("Type size of array: ");
    while (scanf("%d", &siz) != 1 || siz < 1 || siz > 100 || getchar()!= '\n') {
        printf("You wrote an incorrect symbol. Try again!\n");
        rewind(stdin);
    }

    printf("Type 1 for random numbers or type 2 for input numbers of array: ");
    while (scanf("%d", &n) != 1 || (n < 0) || (n > 2) || getchar()!= '\n') {
        printf("You wrote an incorrect symbol. Try again!\n");
        rewind(stdin);
    }
    switch (n) {
        case 1:
            for (int i = 0; i < siz; i++) {
                a[i] = (rand()% 200) - 100;
                printf("The %dth element of array - %d\n", i, a[i]);
            }
            break;
        case 2:
            printf("Type elements of array: \n");
            for (int j = 0; j < siz; j++) {
                printf("Number - ");
                a[j] = goodScanfInt();

            }
            break;
        default:
            printf("You typed a wrong symbol!");
    }
    printf("Second array: ");
    for (int j = 0, v = 0; j < siz; j++) {
        if (a[j] % 2 == 1 || a[j] % 2 == -1) {
            b[v]=a[j];
            printf("%d ",b[v]);
            v++;
        }
    }
    return 0;
}
