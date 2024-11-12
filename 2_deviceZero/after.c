#include <stdio.h>

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;  // Or return an error value
    }
    return a / b;
}

int main() {
    int result = divide(10, 0);  // Handling division by zero
    printf("Result: %d\n", result);
    return 0;
}
