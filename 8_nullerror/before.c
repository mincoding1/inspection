#include <stdio.h>

int main() {
    FILE* file = fopen("data.txt", "r");
    char buffer[100];
    fgets(buffer, 100, file);
    printf("Read from file: %s\n", buffer);
    fclose(file);
    return 0;
}
