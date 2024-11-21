#include <stdio.h>

int count_positives(int size, int array[]) {
    int positives_count = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            positives_count++;
        }
    }

    return positives_count;
}