#include <stdio.h>

int divide(int a, int b) {
    return a / b;  // No error handling for division by zero
}

int main() {
    int result = divide(10, 0);  // Dividing by zero
    printf("Result: %d\n", result);
    return 0;
}
