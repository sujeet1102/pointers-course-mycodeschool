# Strings in C

## Key Concepts

    String Representation:
        Strings in C are stored as character arrays terminated by a null character (\0).
        The null terminator signifies the end of the string.

    Differences Between Arrays and Pointers:
        Array names can act as pointers but are not pointer variables.
        Arrays have a fixed address, and pointer arithmetic on array names (like c1++) is invalid.
        Assigning an array to a pointer (c2 = c1) allows the pointer to reference the array.

    Passing Strings to Functions:
        Arrays are always passed by reference, meaning the function works directly with the memory of the original array.
        Modifying the array within the function reflects changes in the original array.

    String Constants:
        Strings can also be stored as string literals using pointers, e.g., char *C = "text";.
        String literals are stored in read-only memory; modifying them causes a segmentation fault.

## Code Highlights

    String Basics:
        char c[8] = {'J', 'O', 'H', 'N', '\0'};
            Strings must be null-terminated to avoid undefined behavior.
        strlen(c) computes the string length, ignoring the null terminator.

    Arrays and Pointers:
        c1[i] == *(c1 + i): Array indexing is equivalent to pointer dereferencing.
        Assigning c2 = c1 makes c2 a pointer to the first character of c1.

    Passing Strings to Functions:
        Arrays are passed to functions as pointers.
        The function operates directly on the array memory, not a copy.

    String Constants:
        char *C = "bakemonogatari";
            Stored in read-only memory.
            Attempting to modify it (*(C+1) = 'A';) causes a segmentation fault.

## Output Explanation

    String Initialization:
        "String = JOHN"

    String Length:
        "Length of string = 4"

    Modifying Arrays via Pointers:
        After c2[0] = 'A';:
            "Aello"

    Printing Strings with Functions:
        my_string passed to print_string:
            "Johnny"
        String constant C passed to print_string:
            "bakemonogatari"

## Best Practices

    Always ensure strings are null-terminated to avoid undefined behavior.
    Use strlen for the length of the string, not sizeof (which gives the array size).
    Avoid modifying string constants as they reside in read-only memory.