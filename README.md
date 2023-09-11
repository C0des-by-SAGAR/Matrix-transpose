# Matrix-transpose
# Matrix Transposition Program

This C program allows you to enter a matrix and then calculates its transpose. The program takes the number of rows and columns as input, fills the matrix with user-provided values, and then computes the transpose of the matrix.

## Prerequisites

Before you can use this program, ensure that you have a C compiler installed on your system, such as GCC, for compiling and running C programs.

## How to Use

1. Compile the program using your C compiler. For example, using GCC, you can run the following command:

   ```bash
   gcc matrix_transpose.c -o matrix_transpose
   ```

2. Run the compiled program:

   ```bash
   ./matrix_transpose
   ```

3. Follow the on-screen prompts to enter the number of rows and columns of your matrix, as well as the matrix elements.

4. The program will display the original matrix and its transpose.

## Code Explanation

- The program starts by including necessary header files, `stdio.h` for input/output and `conio.h` (not standard) for the `getch()` function.
- The `main()` function is the entry point of the program.
- It prompts the user to enter the number of rows and columns for matrix A.
- It then initializes a 2D array `matA` with the specified dimensions.
- The user is prompted to input elements for matrix A.
- The program displays matrix A and calculates its transpose, storing it in the `matT` array.
- Finally, the program prints the transpose of matrix A and waits for a key press using `getch()` before exiting.

## Sample Output

Here's what a sample run of the program might look like:

```
Enter the no. of rows and columns of matrix A:
3 2

Enter the elements of matrix A:
        A[0][0]= 1
        A[0][1]= 2

        A[1][0]= 3
        A[1][1]= 4

        A[2][0]= 5
        A[2][1]= 6

Matrix A:
        1       2
        3       4
        5       6

Transpose of matrix A:
        1       3       5
        2       4       6
```

## Note

- This program assumes that the user will provide valid input for the number of rows and columns, as well as integer values for the matrix elements.
- The `conio.h` library and `getch()` function are used for waiting for a key press at the end of the program. This is a non-standard feature and may not be available on all systems.
- It's recommended to add error handling to handle invalid user input or edge cases for more robust functionality.
