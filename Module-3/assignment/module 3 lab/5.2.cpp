#include <iostream>
using namespace std;
int main() {
    // Declare 2x2 matrices
    int matrix1[2][2], matrix2[2][2], sum[2][2];
    // Input elements for first matrix
    cout << "Enter elements for the first 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "matrix1[" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }
    // Input elements for second matrix
    cout << "\nEnter elements for the second 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "matrix2[" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }
    // Perform matrix addition
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // Display the result
    cout << "\nResultant matrix after addition:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

