#include <stdio.h>

void func() {
    int a = 10, b = 20, c = 30, d = 40, e = 50;
    printf("%d\n", a + b);
    printf("%d\n", c + d);
    printf("%d\n", e + a);
    printf("%d\n", b + c);
    printf("%d\n", d + e);
}

int main() {
    func();
    return 0;
}
