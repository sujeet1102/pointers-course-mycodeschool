# Array and Pointer Relationship in C

## Key Concepts

    Array Name as a Pointer:
        The name of an array (e.g., arr) acts as a pointer to the first element of the array.
        Accessing arr gives the address of the first element (&arr[0]).

    Pointer Arithmetic:
        Adding to a pointer (ptr_arr + n) moves it by n * sizeof(element_type).
        Dereferencing the result (*(ptr_arr + n)) accesses the value at that position.

    Immutable Array Names:
        Array names cannot be reassigned to point to another location.
        Attempting arr = arr + 1 is invalid in C.

## Code Breakdown

    Array Initialization:
        uint32_t arr[5] = {2,4,6,8,1};: Defines an array with 5 elements of type uint32_t.

    Array Name Behavior:
        arr gives the address of the first element.
        Equivalent to &arr[0].

    Pointer to Array:
        uint32_t *ptr_arr = arr;: Assigns a pointer to the first element of the array.

    Pointer Arithmetic:
        (ptr_arr + 2), (arr + 2), and &arr[2] give the address of the third element.
        *(ptr_arr + 2), *(arr + 2), and arr[2] give the value at the third element.

## Output

    Address of array: <Base Address of arr>  // Address of the first element
    Value at first element: 2               // Dereferenced pointer value
    Addresses of arr[2]: <Calculated Address> <Same Address> <Same Address>
    Values at arr[2]: 6 6 6                 // Value of the third element

## Summary

    Pointer and Array Relationship:
        arr[i] is equivalent to *(arr + i).
        Array names are pointers but cannot be reassigned.
    Pointer Arithmetic:
        Operations like ptr_arr + n are based on the size of the data type.
    Practical Use:
        Useful for iterating over arrays, accessing elements, and pointer manipulation.