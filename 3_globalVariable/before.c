#include <stdio.h>

int globalVar = 10;  // Global variable

void printGlobalVar() {
    printf("Global var: %d\n", globalVar);
}

int main() {
    globalVar = 20;
    printGlobalVar();
    return 0;
}
