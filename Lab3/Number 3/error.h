#include <stdio.h>


int checkingIntOneRROR(int error) {
    if (error != 1) {
        return error;
    }
    char temp = getchar();
    while (temp != '\n')
    {
        if (temp > '9' || temp <= '1') {
            return -2;
        }
    }
    return 1;
}
int goodScanfInt() {
    int num = 0;
    rewind(stdin);
    while (checkingIntOneRROR(scanf("%d", &num)) != 1) {
        printf("You wrote an incorrect symbol. Try again!\n");
        rewind(stdin);
    }
    return num;

}
float goodScanfFloat() {
    float num = 0;
    rewind(stdin);
    while (checkingIntOneRROR(scanf("%f", &num)) != 1) {
        printf("You wrote an incorrect symbol. Try again!\n");
        rewind(stdin);
    }
    return num;

}