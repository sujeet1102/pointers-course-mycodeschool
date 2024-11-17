# Dynamic Memory Allocation in C

## 1. malloc (Memory Allocation)

    Function: Allocates a block of memory of specified size but does not initialize it.
    Prototype: void *malloc(size_t size);
    Returns: A pointer to the beginning of the allocated memory, or NULL if allocation fails.

    int32_t *p = (int32_t *)malloc(n * sizeof(int32_t));

    malloc allocates memory for n integers.
    Casting: Explicit typecasting (int32_t *) is required in C++ but optional in C.

### Usage Example:

    Initialize the allocated memory manually:

    for(int32_t i = 0; i < n; i++) {
        p[i] = i + 1;
    }

## 2. calloc (Contiguous Allocation)

    Function: Allocates memory for an array of elements and initializes all bytes to zero.
    Prototype: void *calloc(size_t num, size_t size);
    Returns: A pointer to the beginning of the allocated memory, or NULL if allocation fails.

    int32_t *A = (int32_t *)calloc(n, sizeof(int32_t));

    Allocates memory for n integers and initializes them to 0.

### Usage Example:

    You can confirm initialization with a loop:

    for(int32_t i = 0; i < n; i++) {
        printf("%d ", A[i]); // All elements will print as 0
    }

## 3. realloc (Resize Memory Block)

    Function: Resizes a previously allocated memory block.
    Prototype: void *realloc(void *ptr, size_t size);
    Returns: A pointer to the newly allocated memory block. The content of the old memory block is preserved up to the lesser of the new and old sizes. If the memory cannot be reallocated, NULL is returned, and the old memory is not freed.

    A = realloc(A, 2 * n * sizeof(int32_t));

    Resizes the memory block pointed to by A to hold 2*n integers.

### Usage Example:

    The additional memory is uninitialized (garbage values for malloc-allocated memory or 0 for calloc):

    for(int32_t i = 0; i < 2 * n; i++) {
        printf("%d ", A[i]);
    }

## 4. free (Deallocate Memory)

    Function: Frees memory allocated by malloc, calloc, or realloc. It is the programmer's responsibility to call free to prevent memory leaks.
    Prototype: void free(void *ptr);

    free(p);
    free(A);

    Deallocates the memory blocks pointed to by p and A.

## Key Points

    Dynamic Memory:
        Dynamically allocated memory is stored on the heap.
        Explicitly freed using free.

    Initialization:
        malloc leaves memory uninitialized (garbage values).
        calloc initializes memory to 0.

    Pointer Validity:
        After free, the pointer is invalid and should not be dereferenced. Setting it to NULL prevents accidental access.

    Error Handling:
        Always check for NULL after allocation to handle allocation failure.

        if (p == NULL) {
            printf("Memory allocation failed!\n");
            return -1;
        }
