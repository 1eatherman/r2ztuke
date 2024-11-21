#include <stdio.h>

void swap_sign(const int size, int array[]) {
    if (size <= 0 || array == NULL) {
        return;
    }
    
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            array[i] = -array[i];
        } else if (array[i] < 0) {
            array[i] = -array[i];
        }

    }

    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main() {
    int array[] = {1, 2, 0, -3, -4, 0};
    swap_sign(6, array);
    return 0;
}
