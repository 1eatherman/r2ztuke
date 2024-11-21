#include <stdio.h>

int binary_num(const int num) {
    if (num < -1000 || num > 1000) {
        return -1;
    }
    if (num == 0 || num == 1) {
        return 1;
    }
    return 0;
}

int main() {
    printf("%d %d %d\n", binary_num(-1001), binary_num(3), binary_num(1));
    return 0;
}
