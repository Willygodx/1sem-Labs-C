#include "arrays.h"
int main() {
    printf("Input amount of rows for table: ");
    int sizeOfTable = checkInput(sizeOfTable);
    int **table;
    int *rows;
        initArray(sizeOfTable, &table, &rows);
        fillArray(sizeOfTable, table, rows);
        outputArray(sizeOfTable, table, rows);
    return 0;
}