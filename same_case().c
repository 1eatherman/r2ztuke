#include <stdio.h>
#include <ctype.h>

int same_case(const char a, const char b) {
    if (!isalpha(a) || !isalpha(b)) {
        return -1;
    }
    if (islower(a) && islower(b)) {
        return 1;
    }
    if (isupper(a) && isupper(b)) {
        return 1;
    }
    return 0;
}


int main() {
    printf("%d %d %d\n", same_case('a', 'f'), same_case('L', 'g'), same_case('#', 'P'));
    return 0;
}
