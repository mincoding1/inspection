#include <stdio.h>

#define TAX_RATE 0.1  // Clear meaning of tax rate

int main() {
    float price = 100.0;
    float tax = price * TAX_RATE;
    printf("Price with tax: %.2f\n", price + tax);
    return 0;
}
