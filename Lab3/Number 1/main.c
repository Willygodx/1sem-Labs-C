#include <stdio.h>
#include <stdlib.h>
#include "error.h"

int main() {
    double m = 1,  sum = 0;
    int i, mn = 0, mx = 0, siz, n, a[100];
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
                a[i] = (rand() % 200 ) - 100;
                printf("The %dth number of array is %d\n", i, a[i]);
                if (a[i] < a[mn]) mn = i;
                if (a[i] > a[mx]) mx = i;
                if (a[i] < 0) {
                    sum += a[i];
                }
            }
            break;
        case 2:
            printf("Type numbers of array: \n");
            for (int i = 0; i < siz; i++) {
                printf("Number - ");
                a[i] = goodScanfInt();

                if (a[i] < a[mn]) mn = i;
                if (a[i] > a[mx]) mx = i;
                if (a[i] < 0) {
                    sum += a[i];
                }
            }
            break;
        default :
            printf("You typed a wrong number!");
    }
    printf("Sum: %0.2lf\n", sum);
    if (mx > mn) {
        i = mx;
        mx = mn;
        mn = i;
    }
    for (i = mx + 1; i < mn; i++) {
        m *= a[i];
    }
    printf("Multiplication: %0.2lf", m);
    return 0;
}
