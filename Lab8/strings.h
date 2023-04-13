#include <stdlib.h>
#include <stdio.h>

void outputArrayStrings(char** string, int end);
char** copyArrayStrings(char** argv, int size);
int stringsLength(const char* string);
int words(const char* string);
void insertSort(char** arr, int end);
void freeArrayStrings(char** arr, int size);