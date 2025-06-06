# Arrays and Abstract Data Types in Data Structure

Welcome! Today, we learnt about **Abstract Data Types (ADT)** and their relationship with arrays. This is an introductory guide.

---

## Abstract Data Types (ADT)

**Abstract Data Types (ADT)** are a way of classifying data structures. They provide a minimal expected interface and a set of methods, much like a blueprint for a building or a computer. The blueprint lays out all the minimum requirements and the roadmap for the task ahead.

---

## Array as an ADT

An **array ADT** holds a collection of elements (such as `int`, `float`, or custom types), accessible by their index.

### 1. Minimal Required Functionality

Arrays provide two basic functionalities:

- **get(i)** – Retrieve the element at index `i`.
- **set(i, num)** – Assign the value `num` to index `i`.

### 2. Common Operations

Beyond the basic operations, here are some additional operations commonly performed on arrays:

- **Max()**: Find the maximum element.
- **Min()**: Find the minimum element.
- **Search(num)**: Search for the element `num`.
- **Insert(i, num)**: Insert `num` at index `i`.
- **Append(x)**: Add `x` to the end of the array.

---

## Static vs. Dynamic Arrays

- **Static Arrays**: The size of the array cannot be changed after creation.
- **Dynamic Arrays**: The size of the array can be changed (expanded or shrunk).

---

## Quick Quiz

**Task:**  
Code the operations mentioned above in C language by creating an array ADT.

**Hint:**  
Use structures to represent the array ADT.

---

## Memory Representation of Arrays

- Elements in an array are stored in contiguous memory locations.
- Elements can be accessed in constant time `O(1)` using the base address and index.
- Changing the size of an array isn’t directly possible, but you can reallocate to a larger memory location. (Resizing is a costly operation.)

---

## Summary

This concludes our discussion on the basics of array ADT. In the next tutorial, we’ll implement these data types in code.


## For the full playlist, visit [codewithharry.com](https://www.codewithharry.com) or his [YouTube channel](https://www.youtube.com/@CodeWithHarry).

