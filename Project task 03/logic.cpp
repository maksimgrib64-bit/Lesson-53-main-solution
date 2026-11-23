#include "logic.h"


int sum_above_secondary(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int size) {
    if (size <= 1 || size > DEFAULT_SIZE) {
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            sum += matrix[i][j];
        }
    }
    return sum;
}


int sum_below_secondary(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int size) {
    if (size <= 1 || size > DEFAULT_SIZE) {
        return 0;
    }

    int sum = 0;
    for (int i = 1; i < size; ++i) {
        for (int j = size - i; j < size; ++j) {
            sum += matrix[i][j];
        }
    }
    return sum;
}