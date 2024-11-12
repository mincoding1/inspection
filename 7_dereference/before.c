#include <stdio.h>

int main() {
    int* ptr = NULL;
    printf("Dereferenced value: %d\n", *ptr);  // Dereferencing NULL pointer
    return 0;
}
