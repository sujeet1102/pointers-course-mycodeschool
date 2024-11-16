# Notes: Pointer to Pointer in C

## Overview:

    Pointers to Pointers: A pointer that stores the address of another pointer.
    Pointer Levels:
        Single pointer: Points to a variable.
        Double pointer: Points to a pointer.
        Triple pointer: Points to a double pointer.

## Key Points:

    Variables and Addresses:
        x is a uint32_t variable initialized with 5.
        p is a pointer to x (uint32_t *p).
        q is a pointer to p (uint32_t **q).
        r is a pointer to q (uint32_t ***r).

    Pointer Dereferencing:
        *p: Value of x (dereferencing a single pointer).
        *q: Address stored in p (value of p).
        **q: Value of x (dereferencing a double pointer).
        *r: Address stored in q (value of q).
        **r: Address stored in p (value of p).
        ***r: Value of x (dereferencing a triple pointer).

    Memory Representation:
        x contains 5 initially.
        p stores the address of x.
        q stores the address of p.
        r stores the address of q.

    Pointer Arithmetic:
        Assignments can propagate through multiple pointer levels to modify the original variable (x).
        Example:
            ***r = 10; sets x to 10.
            **q = *p + 2; sets x to 8.

## Outputs:

    Addresses:
        &x: Address of x.
        &p: Address of p.
        &q: Address of q.
        &r: Address of r.

    Dereferenced Values:
        *p: Value of x (6 after modification).
        *q: Value of p (address of x).
        **q: Value of x (6 after modification).
        *r: Value of q (address of p).
        **r: Value of p (address of x).
        ***r: Value of x (6 after modification).

    Final Changes to x:
        ***r = 10; sets x to 10.
        **q = *p + 2; increments x by 2 (final value: 8).

## Practical Use:

    Multi-level pointers are useful in dynamic memory allocation, data structures like trees and graphs, and managing arrays or strings.