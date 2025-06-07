# Array as An Abstract Data Type in Data Structures (With Notes)

**From what I learned (after watching CodeWithHarry's video):**

---

## Quick Revision: What is an Abstract Data Type (ADT)?

An abstract data type (ADT) is like another data type, just like `int` or `float`, but with some user-defined methods and operations. It’s basically a customized data type where you define what you want to do with it.

---

## Implementing Array as an ADT

Now, instead of just using normal arrays, we can actually build a customized array with our own set of values and operations, and even manage it in the heap. For this, let’s call our new custom array: **myArray**.

### The "myArray" Blueprint

**myArray** should have the following parameters (values):

- `total_size`: How much memory we have reserved for the array.
- `used_size`: How much of that memory is actually being used.
- `base_address`: A pointer to the first element of the array.

And the following operations (methods):

- `max()`: Returns the maximum value in the array.
- `get(i)`: Gets the value at index `i`.
- `set(i, num)`: Sets the value at index `i` to `num`.
- `add(another_array)`: Adds the values of another array to this one.

---

## What Do These Parameters and Operations Mean?

- **total_size**: The total amount of memory reserved for the array, even if not all is used.
- **used_size**: The number of elements currently being used in the array.
- **base_address**: The starting memory address of the array (pointer to the first element).

---

## Example Illustration

Suppose we have an array stored in memory like this:

| Index | 0 | 1 | 2 | 3 | 4 | 5 |
|-------|---|---|---|---|---|---|
| Value | 5 | 8 | 2 |   |   |   |

- If `total_size` is 6, it means we reserved space for 6 elements.
- If `used_size` is 3, it means only the first 3 elements are being used (5, 8, 2).
- `base_address` points to the memory address of the first element (5).

---

## Summary

So, by defining our own parameters and methods, we can create a custom array (like `myArray`) as an abstract data type (ADT). This lets us control how much space we use, keep track of what’s filled, and create our own operations for working with the data.

*Next, I’ll try to implement these ideas in code, just like Harry does in his tutorials!*

---
