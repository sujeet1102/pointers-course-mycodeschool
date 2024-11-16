# Pointer Operations and Memory Layout

## Variables Declared

    uint32_t a: 32-bit unsigned integer.
    char b: Character type.
    uint8_t c: 8-bit unsigned integer.
    double d: Double precision floating-point.
    uint64_t e: 64-bit unsigned integer.

## Pointer to uint32_t

    A pointer is created and assigned the address of a.
    Pointer Operations:
        Address of a.
        Pointer value (address stored in the pointer).
        Pointer's address.
        Sizeof:
            Size of the variable.
            Size of the value pointed to by the pointer.
            Size of the pointer itself.
    Dereferencing:
        Value of a is assigned and accessed via the pointer.

## Pointer to char

    A pointer is created and assigned the address of b.
    Pointer Operations:
        Address of b.
        Pointer value (address stored in the pointer).
        Pointer's address.
        Sizeof:
            Size of the variable.
            Size of the value pointed to by the pointer.
            Size of the pointer itself.
    Dereferencing:
        Value of b is assigned and accessed via the pointer.

## Sizeof Data Types

    Size of various data types:
        uint32_t: 4 bytes.
        char: 1 byte.
        uint8_t: 1 byte.
        double: 8 bytes.
        uint64_t: 8 bytes.
        Pointer: Size depends on the platform (typically 4 bytes on 32-bit systems, 8 bytes on 64-bit systems).

## Key Concepts

### Pointers

    Pointers store memory addresses of variables.
    Dereferencing a pointer accesses the value stored at the memory address.

### Memory Layout

    sizeof operator determines the memory allocated to a type or variable.
    Size of a pointer depends on the architecture of the system.

### Address vs. Value

    The address of a variable can be obtained using the address-of operator.
    A pointer variable holds this address, and dereferencing it retrieves the value at that address.