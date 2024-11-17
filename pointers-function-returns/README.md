## Stack vs. Heap Memory:

    Stack: Local to the function, automatically deallocated when the function exits.
    Heap: Allocated manually (malloc), persists until explicitly freed (free).

## Undefined Behavior:

    Returning a pointer to a local variable leads to undefined behavior because the stack memory is invalidated after the function exits.

## Dynamic Memory Allocation:

    Use malloc to allocate memory on the heap for data that needs to persist beyond the function call.
    Always free heap-allocated memory using free() to prevent memory leaks.

## Pointers and Memory Ownership:

    Understand who "owns" the memory and ensure proper cleanup to avoid dangling pointers or memory leaks.

## Segmentation Fault:

    Occurs when accessing invalid memory, such as dereferencing a pointer to deallocated or uninitialized memory.

## Memory Management Best Practices:

    Do not return pointers to local variables.
    Use malloc for persistent data and ensure corresponding free.