#include <stdio.h>
#include <stdlib.h>

void createArray() {
    int *arr = (int *)malloc(10 * sizeof(int));
    // Memory allocated, but not freed
    arr[0] = 10;
    printf("First element: %d\n", arr[0]);
}

int main() {
    createArray();
    return 0;
}
