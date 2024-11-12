#include <stdio.h>

int main() {
    float price = 100.0;
    float tax = price * 0.1;  // 0.1 is a magic number
    printf("Price with tax: %.2f\n", price + tax);
    return 0;
}
