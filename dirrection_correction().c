#include <stdio.h>

int direction_correction(const int degree) {
    if (degree % 90 != 0) {
        return -1;
    }

    int normalized_degree = degree % 360;
    if (normalized_degree < 0) {
        normalized_degree += 360;
    }

    return normalized_degree;
}

int main() {
    printf("%d %d %d\n", 
        direction_correction(-90), 
        direction_correction(540), 
        direction_correction(180));
    return 0;
}
