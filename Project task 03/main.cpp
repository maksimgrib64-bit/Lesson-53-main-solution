#include <iostream>
#include "logic.h"

using namespace std;

int main() {
    int size;
    int matrix[DEFAULT_SIZE][DEFAULT_SIZE];

    cout << "Enter square matrix size (1 - " << DEFAULT_SIZE << "): ";
    cin >> size;

   
    if (size <= 0 || size > DEFAULT_SIZE) {
        cout << "Error: Invalid matrix size!" << endl;
        return 1;
    }

    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nSum above secondary diagonal: " << sum_above_secondary(matrix, size) << endl;
    cout << "Sum below secondary diagonal: " << sum_below_secondary(matrix, size) << endl;

    return 0;
}