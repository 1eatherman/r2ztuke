#include <stdio.h>

int count_whites(const char *str) {
    if (str == NULL) {
        return -1; 
    }

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            count++;
        }
    }

    return count;
}

int main() {
    const char *test_str = "Hello,\nWorld!\tThis is a test. ";
    printf("Whitespace count: %d\n", count_whites(test_str));

    const char *empty_str = "";
    printf("Whitespace count: %d\n", count_whites(empty_str));

    printf("Whitespace count for NULL: %d\n", count_whites(NULL));
    return 0;
}
