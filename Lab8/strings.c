#include "strings.h"

void outputArrayStrings(char** string, int end) {
    printf("\n");
    for(int i = 1; i < end; i++){
        printf("%s",string[i]);
        printf("\n");
    }
}
char** copyArrayStrings(char** argv, int size) {
    char** argv1 = malloc(sizeof (char *) * size);
    for (int i = 0; i < size; i++) {
        argv1[i] = malloc(sizeof (char) * stringsLength(argv[i]));
        for (int j = 0; j < stringsLength(argv[i]) + 1; j++){
            argv1[i][j] = argv[i][j];
        }
    }
    return argv1;
}
int stringsLength(const char* string) {
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        count++;
    }
    return count;
}
int words(const char* string) {
    int cnt = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ') cnt++;
    }
    return cnt;
}
void insertSort(char** arr, int end) {
    for(int i = 2; i < end; i++){
        if(stringsLength(arr[i]) < stringsLength(arr[i - 1])){
            for(int j = i; j > 1; j--){
                if(words(arr[j]) < words(arr[j - 1])){
                    char* temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
        }
    }
}
void freeArrayStrings(char** arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        free(arr[i]);
    }
    free(arr);
}

