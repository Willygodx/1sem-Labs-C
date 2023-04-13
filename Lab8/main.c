#include "strings.h"

int main(int argc,char **argv) {
    printf("Array of strings with an arguments from cmd: ");
    outputArrayStrings(argv, argc);
    char** argv1 = copyArrayStrings(argv, argc);
    insertSort(argv1, argc);
    printf("Sorted array of strings with an arguments from cmd: ");
    outputArrayStrings(argv1, argc);
    freeArrayStrings(argv1, argc);
    _Exit(EXIT_SUCCESS);
}