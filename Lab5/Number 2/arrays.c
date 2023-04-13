#include "arrays.h"
int checkInput(int a) {
    while (scanf("%d", &a) != 1 || a <= 0 || getchar() != '\n' || a > 100) {
        printf("Incorrect input. Try again: ");
        rewind(stdin);
    }
    return a;
}
void initArray(int sizeOfTable, int*** table, int** rows) {
    *table = (int**)calloc(sizeOfTable, sizeof(int *));
    *rows = (int*)calloc(sizeOfTable, sizeof(int));
}
void fillArray(int sizeOfTable, int** table, int *rows) {
    for (int i = 0; i < sizeOfTable; i++) {
        int n = 1;
        printf("Enter a %d row: ", i);
        rewind(stdin);
        do {
            if(scanf("%d", &n) == 0){
                printf("You wrote an incorrect raw. Try again!\n");
                rewind(stdin);
                i -=1;
                break;
            }
            table[i] = realloc(table[i], sizeof(int) * (rows[i] + 1));
            table[i][rows[i]] = n;
            rows[i]++;
        } while (n != 0);
    }
}
void outputArray(int sizeOfTable, int** table, int* rows) {
    for(int i = 0; i < sizeOfTable; i++){
        for(int j = 0;j < rows[i] - 1; j++){
            printf("%d ",table[i][j]);
        }
        printf("\n");
    }
}