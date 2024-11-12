#include <stdio.h>

int main() {
    FILE* file = fopen("/usr/local/data.txt", "r");  
    if (file != NULL) {
        // 파일 작업
    }
    return 0;
}
