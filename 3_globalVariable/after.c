#include <stdio.h>

void printVar() {
    int localVar = 20;  // Local variable
    printf("Local var: %d\n", localVar);
}

int main() {
    printVar();
    return 0;
}
