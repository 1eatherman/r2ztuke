#include<stdio.h>

int guess_eval(int guess, int my_number) {
    if (guess > my_number) {
        return 2;
    }
    else if (guess < my_number) {
        return 0;
    }
    else if (guess == my_number) {
        return 1;
    }
}

int main() {
    printf("%d\n", guess_eval(34, 22));
}