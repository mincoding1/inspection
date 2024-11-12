#include <stdio.h>

void calculateArea(float width, float height) {
    float area = width * height;
    printf("Area: %.2f\n", area);
}

int main() {
    calculateArea(5.0, 10.0);  // Rectangle
    calculateArea(4.0, 4.0);   // Square (side x side)
    return 0;
}
