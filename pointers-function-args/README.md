# Call by Value vs Call by Reference

## Key Concepts

    Call by Value:
        A copy of the actual variable is passed to the function.
        Changes made inside the function do not affect the original variable.
        Safe for situations where the original data must remain unchanged.

    Call by Reference:
        A pointer to the actual variable is passed to the function.
        Changes made via the pointer directly affect the original variable.
        Useful for modifying data in-place or sharing large structures efficiently.

## Code Breakdown

    Function: increment_pass_by_value
        Accepts a uint32_t value.
        Creates a local copy of the input variable in the function's stack frame.
        Modifies the local copy, leaving the original variable unchanged.

    Function: increment_pass_by_reference
        Accepts a pointer (uint32_t *) to the variable.
        Uses dereferencing (*ptr_a) to modify the value at the memory address of the original variable.

    Main Function:
        Initializes uint32_t a = 10.
        Demonstrates the difference between call by value and call by reference:
            Call by Value:
                Passes a directly.
                Prints 10 as increment_pass_by_value does not affect the original variable.
            Call by Reference:
                Passes the address of a using &a.
                Prints 11 as increment_pass_by_reference modifies the original variable.

## Output

10  // Result of call by value (original `a` remains unchanged)
11  // Result of call by reference (original `a` is incremented)

## Summary

    Call by Value: Does not change the original variable.
    Call by Reference: Changes the original variable through pointers.
    Use call by reference for efficiency when dealing with large data or when modifications are required.