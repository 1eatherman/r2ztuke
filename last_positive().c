#include <stdio.h>

int find_last_positive(const int *array, int size) {
    if (array == NULL || size <= 0) {
        return -1;
    }

    int last_positive = -1;

    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            last_positive = array[i];
        }
    }

    return last_positive;
}

int main() {
    int array1[] = {1, -2, 3, 0, -5};
    int array2[] = {-1, -2, -3, -4, -5};
    int array3[] = {};
    int *null_array = NULL;

    printf("Last positive in array1: %d\n", find_last_positive(array1, 5));
    printf("Last positive in array2: %d\n", find_last_positive(array2, 5));
    printf("Last positive in array3: %d\n", find_last_positive(array3, 0));
    printf("Last positive in NULL array: %d\n", find_last_positive(null_array, 0));

    return 0;
}
