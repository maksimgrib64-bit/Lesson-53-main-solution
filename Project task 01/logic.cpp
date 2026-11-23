#include "logic.h"

bool has_same_values(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
    if (n <= 0 || m <= 0 || n > DEFAULT_SIZE || m > DEFAULT_SIZE) {
        return false;
    }
    if (n * m < 2) {
        return false;
    }

    int total_elements = n * m;

    for (int i = 0; i < total_elements - 1; ++i) {
        int r1 = i / m;
        int c1 = i % m;

        for (int j = i + 1; j < total_elements; ++j) {
            int r2 = j / m;
            int c2 = j % m;

            if (matrix[r1][c1] == matrix[r2][c2]) {
                return true;
            }
        }
    }

    return false;
}