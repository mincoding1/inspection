#include <stdio.h>
#include <stdlib.h>

void createArray() {
    int *arr = (int *)malloc(10 * sizeof(int));
    arr[0] = 10;
    printf("First element: %d\n", arr[0]);
    free(arr);  // Memory freed
}

int main() {
    createArray();
    return 0;
}
