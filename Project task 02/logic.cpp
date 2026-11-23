#include "logic.h"


int sum_below_main(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int size) {
    if (size <= 1 || size > DEFAULT_SIZE) {
        return 0;
    }

    int sum = 0;
    for (int i = 1; i < size; ++i) {
        for (int j = 0; j < i; ++j) {
            sum += matrix[i][j];
        }
    }
    return sum;
}


int sum_above_main(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int size) {
    if (size <= 1 || size > DEFAULT_SIZE) {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            sum += matrix[i][j];
        }
    }
    return sum;
}