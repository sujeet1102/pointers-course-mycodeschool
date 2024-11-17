# Array Decay and Size in Function Arguments in C

## Key Concepts

    Array Decay:
        When passing an array to a function, the array name is converted to a pointer to the first element.
        This is why the parameter int32_t A[] is treated as int32_t *A.

    Pointer Arithmetic:
        Within the function, operations like A++ are valid since A is now a pointer.
        The size of A in the function is the size of the pointer (8 bytes on 64-bit systems).

    Limitations of sizeof in Functions:
        Using sizeof(A) in the function returns the size of the pointer (8 bytes), not the size of the original array.
        This is why calculating the size of the array within the function using sizeof(A) fails.

    Passing Array Size:
        To correctly handle arrays, always pass the size of the array explicitly as an additional parameter.

## Code Explanation

    Array Initialization:
        int32_t A[] = {1,2,3,4,5};: Declares an array of 5 integers.
        uint32_t size = sizeof(A)/sizeof(A[0]);: Calculates the number of elements in the array.

    Function Call:
        SumofElements(A, size);: Passes the array and its size to the function.

    Function Behavior:
        Inside the function, A is a pointer, not the original array.
        sizeof(A) yields the size of the pointer (8 bytes), leading to incorrect size calculations if attempted.

    Summation Loop:
        The function iterates through the array using the passed size and calculates the sum.

## Output

Size of pointer NOT array = 8
Sum of all elements = 15

## Summary

    Array Passing:
        Arrays decay into pointers when passed to functions.
        The size information of the original array is lost; explicitly pass the size as a parameter.

    Limitations of sizeof:
        Inside the function, sizeof(A) reflects the pointer size, not the array size.

    Best Practices:
        Always pass the size of the array to avoid errors.
        Understand array decay to pointers to avoid pitfalls with operations like sizeof and pointer arithmetic.