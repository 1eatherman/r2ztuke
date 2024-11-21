#include <stdio.h>

int all_positives(const int *array, int size) {
    if (array == NULL) {
        return -1;
    }

    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {-1, 2, 3, 4, 5};
    int array3[] = {};
    int *null_array = NULL;

    printf("Array1: %d\n", all_positives(array1, 5));
    printf("Array2: %d\n", all_positives(array2, 5));
    printf("Array3: %d\n", all_positives(array3, 0));
    printf("NULL Array: %d\n", all_positives(null_array, 0));

    return 0;
}
