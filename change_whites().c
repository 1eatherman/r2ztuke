#include <stdio.h>

void change_whites(char *str) {
	while (*str) {
		if (*str == ' ' || *str == '\n') {
			*str = '.';
		}
		str++;
	}
}

int main() {
	char test_str[] = "Hello World\n ";
	change_whites(test_str);
	printf("%s\n", test_str);
	
	return 0;
}
