#include "str.h"

int main() {
    int menuChoose = 0;
    printf("Type 1 or 2 to solve first or second task.\n>");
    void (*menu[2]) (void) = { task1, task2 };
    menuChoose = checkMenuInput(menuChoose);
    menu[menuChoose - 1]();
}