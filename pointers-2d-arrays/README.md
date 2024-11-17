# Pointers and Arrays in C (2D and 3D Arrays)

## 2D Array Basics

    A 2D array is essentially an array of arrays.
    The name of the 2D array (e.g., B) is treated as a pointer to the first row (a 1D array).

### Example:

int32_t B[3][4];

    B or &B[0] → Pointer to the first row (type: int32_t (*)[4]).
    *B or B[0] or &B[0][0] → Pointer to the first element in the first row (type: int32_t *).
    B + 1 or &B[1] → Pointer to the second row (type: int32_t (*)[4]).
    *(B + 1) or B[1] or &B[1][0] → Pointer to the first element in the second row (type: int32_t *).
    *(B + 1) + 2 or B[1] + 2 or &B[1][2] → Pointer to the third element in the second row (type: int32_t *).

### Key Formula: For 2D arrays:

    B[i][j] = *(B[i] + j) = *(*(B + i) + j)

## 3D Array Basics

    A 3D array is an array of 2D arrays.
    The name of the 3D array (e.g., C) is treated as a pointer to the first 2D array.

### Example:

int32_t C[3][2][2];

    C or &C[0] → Pointer to the first 2D array (type: int32_t (*)[2][2]).
    *C or C[0] or &C[0][0] → Pointer to the first row (a 1D array) in the first 2D array (type: int32_t (*)[2]).
    **C or C[0][0] or &C[0][0][0] → Pointer to the first element in the first row of the first 2D array (type: int32_t *).

### Key Formula: For 3D arrays:

    C[i][j][k] = *(C[i][j] + k) = *(*(C[i] + j) + k) = *(*(*(C + i) + j) + k)

### Function Accepting 3D Array

    When passing a 3D array to a function, it decays into a pointer to a 2D array.
    Example Function:

    int32_t func(int32_t (*A)[2][2])

    A is a pointer to a 2D array of dimensions [2][2].
    Inside the function, A can be used to traverse the 3D array using pointer arithmetic.

### Code Breakdown

int32_t B[3][4];

    int32_t (*p)[4] = B; // Pointer to a 1D array of 4 integers p is a pointer to a row in B.

    int32_t *ptr = *(B+1)+2; // Pointer to element B[1][2]
    B+1 → Points to the second row.
    *(B+1) → Points to the first element of the second row.
    *(B+1)+2 → Points to the third element of the second row.

### Understanding the Outputs

    sizeof on array names provides the size of the entire array, while on pointers, it provides the pointer size.
    The address values printed reflect the starting memory locations for the respective pointers.

## Practical Notes

    Arrays decay into pointers when passed to functions, losing size information.
    Use the sizeof operator carefully; it works differently for arrays and pointers.
    Pointer arithmetic is key to navigating arrays efficiently.