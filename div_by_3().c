#include <stdio.h>

int div_by_3(const int num) {
    if (num % 3 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    printf("%d %d %d\n", div_by_3(-3), div_by_3(6), div_by_3(8));
    return 0;
}
