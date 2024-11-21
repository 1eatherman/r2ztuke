#include <stdio.h>

int is_white(char c) {
	if (c == ' ' || c == '\n' || c == '\t') {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	char test_char = ' ';
	printf("is_white('%c') = %d\n", test_char, is_white(test_char));
	
	test_char = '\n';
	printf("is_white('\\n') = %d\n", is_white(test_char));
	
	test_char = 'a';
	printf("is_white('a') = %d\n", is_white(test_char));
	
	return 0;
}
