#include <stdio.h>

void calculateAreaRect(float width, float height) {
    float area = width * height;
    printf("Rectangle area: %.2f\n", area);
}

void calculateAreaSquare(float side) {
    float area = side * side;
    printf("Square area: %.2f\n", area);
}

int main() {
    calculateAreaRect(5.0, 10.0);
    calculateAreaSquare(4.0);
    return 0;
}
