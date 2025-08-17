Yashvesh Singh 24070123138
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int A[rows][cols], B[rows][cols], sum[rows][cols];
    cout << "\nEnter elements of first array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
    cout << "\nEnter elements of second array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "\nSum of the two arrays:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
output:
Enter number of rows: 3
Enter number of columns: 3

Enter elements of first array:
A[0][0]: 1
A[0][1]: 2
A[0][2]: 3
A[1][0]: 4
A[1][1]: 5
A[1][2]: 6
A[2][0]: 7
A[2][1]: 8
A[2][2]: 9

Enter elements of second array:
B[0][0]: 1
B[0][1]: 3
B[0][2]: 5
B[1][0]: 7
B[1][1]: 9
B[1][2]: 2
B[2][0]: 4
B[2][1]: 6
B[2][2]: 8

Sum of the two arrays:
2 5 8 
11 14 8 
11 14 17 
