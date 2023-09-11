# Matrix-transpose
Thank you for sharing the link! Let's get started with documenting the code.

**Title: Matrix Transpose**

**Description:**
This program demonstrates how to find the transpose of a matrix in the C programming language. The transpose of a matrix is obtained by interchanging its rows with columns.

**Code:**
```c
#include <stdio.h>

#define ROWS 3
#define COLS 3

void transposeMatrix(int matrix[ROWS][COLS], int transposedMatrix[COLS][ROWS]) {
    int i, j;
    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[ROWS][COLS]) {
    int i, j;
    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int transposedMatrix[COLS][ROWS];
    
    printf("Original Matrix:\n");
    displayMatrix(matrix);
    
    transposeMatrix(matrix, transposedMatrix);
    
    printf("\nTransposed Matrix:\n");
    displayMatrix(transposedMatrix);
    
    return 0;
}
```

**Explanation:**

1. The program starts by including the necessary header file, `stdio.h`, which provides functions for input and output operations.

2. The `#define` directive is used to define constants `ROWS` and `COLS` to represent the number of rows and columns in the matrix, respectively.

3. The `transposeMatrix` function is defined to calculate the transpose of the given matrix. It takes two parameters: the `matrix` to be transposed and the `transposedMatrix` where the result will be stored.

4. Inside the `transposeMatrix` function, two nested `for` loops are used to iterate over each element of the matrix. The value at `matrix[i][j]` is assigned to `transposedMatrix[j][i]`, effectively interchanging the rows and columns.

5. The `displayMatrix` function is defined to print the elements of the matrix. It takes a single parameter, the matrix to be displayed.

6. Inside the `displayMatrix` function, two nested `for` loops are used to iterate over each element of the matrix. The value at `matrix[i][j]` is printed using the `printf` function.

7. In the `main` function, a sample matrix is declared and initialized with values.

8. The original matrix is displayed using the `displayMatrix` function.

9. The `transposeMatrix` function is called, passing the original matrix and an empty `transposedMatrix` as arguments.

10. The transposed matrix is displayed using the `displayMatrix` function.

11. Finally, the program returns 0 to indicate successful execution.

**Usage:**
1. Clone the repository using `git clone https://github.com/C0des-by-SAGAR/Matrix-transpose.git`.
2. Open the project in a C development environment or compile the code using a C compiler.
3. Run the program and observe the output.
