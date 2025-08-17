Yashvesh Singh 24070123138
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[rows][cols], transpose[cols][rows];
    cout << "\nEnter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "\nTransposed matrix:\n";
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
  output:
  Enter number of rows: 4
Enter number of columns: 4

Enter elements of the matrix:
matrix[0][0]: 1
matrix[0][1]: 2
matrix[0][2]: 3
matrix[0][3]: 4
matrix[1][0]: 5
matrix[1][1]: 6
matrix[1][2]: 7
matrix[1][3]: 8
matrix[2][0]: 9
matrix[2][1]: 1
matrix[2][2]: 3
matrix[2][3]: 5
matrix[3][0]: 7
matrix[3][1]: 9
matrix[3][2]: 2
matrix[3][3]: 4

Transposed matrix:
1 5 9 7 
2 6 1 9 
3 7 3 2 
4 8 5 4 


    return 0;
}
