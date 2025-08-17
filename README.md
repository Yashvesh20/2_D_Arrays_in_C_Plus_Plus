# 2_D_Arrays_in_C_Plus_Plus
# Software Required :
Visual Studio
# Theory:

A multi-dimensional array can be defined as an array that has more than one dimension. Having more than one dimension means that it can grow in multiple directions.

2D Array:

A two-dimensional array in C++ is a collection of elements organized the form of rows and columns. It can be visualized as a table or a grid.

A 2D arrays have two dimensions, the list is nested inside another list to initialize each dimension one by one. It means that each row values are nested inside one big list.

# Implementation:
In this programs the usage of 2D arrays was implemented using several codes which are,
+ Displaying A matrix
+ Addition of Matrix
+ Multiplication of Matrices
+ Diagonal Addition of Matrix
+ Trnaspose of a Matrix

# Algorithms:

Matrix Multiplication:

Step 1. Start
Step 2. Declare integer variables `m`, `n` for rows and columns of Matrix 1.
Step 3. Display "Enter the number of rows for matrix 1:" and read `m`.
Step 4. Display "Enter the number of columns for matrix 1:" and read `n`.
Step 5. Declare a 2D array `mat[m][n]`.
Step 6. Declare integer variables `x`, `y` for rows and columns of Matrix 2.
Step 7. Display "Enter the number of rows for matrix 2:" and read `x`.
Step 8. Display "Enter the number of columns for matrix 2:" and read `y`.
Step 9. Declare a 2D array `mat2[x][y]`.
Step 10. If `n != x`:

    Display "The matrices cannot be multiplied".
         Stop.
Step 11. Else:

     Display "The matrices can be multiplied".
Step 12. Input elements of Matrix 1 in `mat`.
Step 13. Input elements of Matrix 2 in `mat2`.
Step 14. Declare a 2D array `mat3[m][y]` and initialize all elements to `0`.
Step 15. For each `i` in range `0` to `m-1`:

     For each `j` in range `0` to `y-1`:

       For each `k` in range `0` to `n-1`:

         `mat3[i][j] += mat[i][k] * mat2[k][j]`.
Step 16. Display Matrix 1.
Step 17. Display Matrix 2.
Step 18. Display the Resultant Matrix (`mat3`).
Step 19. End

Sum of Diagonal Elements in a Square Matrix

Step 1. Start
Step 2. Declare integer variables `m`, `n`.
Step 3. Display "Enter the number of rows for matrix:" and read `m`.
Step 4. Display "Enter the number of columns for matrix:" and read `n`.
Step 5. If `m != n`:

   Display "The matrix is not square, diagonal addition is not possible".
     Stop.
Step 6. Declare a 2D array `mat[m][n]`.
Step 7. Display "Enter the elements of the matrix:".
Step 8. For `i` from `0` to `m-1`:

   For `j` from `0` to `n-1`:

      Read `mat[i][j]`.
Step 9. Display "The matrix is:" followed by all elements in matrix form.
Step 10. Initialize `diagsum = 0`.
Step 11. For `i` from `0` to `n-1`:

     Add `mat[i][i]` to `diagsum`.
Step 12. Display "Sum of diagonal:" followed by `diagsum`
Step 13. End

# Conclusion:
2D arrays was implemented using these codes.
