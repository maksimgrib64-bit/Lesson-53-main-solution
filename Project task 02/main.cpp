#include <iostream>
#include "logic.h"

using namespace std;

int main() {
    int size;
    int matrix[DEFAULT_SIZE][DEFAULT_SIZE];

    cout << "Input size from 1 - " << DEFAULT_SIZE << "): ";
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

    cout << "\nSum below main diagonal: " << sum_below_main(matrix, size) << endl;
    cout << "Sum above main diagonal: " << sum_above_main(matrix, size) << endl;

    return 0;
}
