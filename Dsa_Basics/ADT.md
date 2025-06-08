# Implementing Array as an Abstract Data Type in C Language (Personal Notes)

## What I Learned from Harry's Tutorial

In the last tutorial, I learned about the blueprint for a customized abstract data type called `myArray`. This time, I learned how to actually implement that array ADT in C using structures and some basic functions.

---

## Editor & Compiler Recommendations

Harry recommends using the MinGW w64-bit compiler for compiling C programs and VS Code as the editor. VS Code is great because it supports a lot of languages and is very versatile. If you need help setting things up, you can check out his YouTube video for a walkthrough.

---

## Steps in the Implementation

### 1. Define the Structure

First, we create a structure to represent our custom array. In C, we use `struct` to define a new data type. The structure for `myArray` includes:

- `total_size`: total memory reserved for the array
- `used_size`: how much of that memory is actually used
- `ptr`: a pointer to the first element of the array (base address)

### 2. Functions to Operate on myArray

#### a) `createArray`

This function initializes a `myArray` object. It takes the address of a struct and the sizes, assigns them to the struct members, and uses `malloc` to allocate memory on the heap for the array.

```c
void createArray(struct myArray * a, int tSize, int uSize){
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}
```

#### b) `show`

This function prints all the elements in the array up to `used_size`.

```c
void show(struct myArray *a){
    for (int i = 0; i < a->used_size; i++) {
        printf("%d\n", (a->ptr)[i]);
    }
}
```

#### c) `setVal`

This function allows the user to input values for the array. It loops up to `used_size` and uses `scanf` to set each value.

```c
void setVal(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
```

---

## Complete Code Example

Here's the full code from the tutorial:

```c
#include<stdio.h>
#include<stdlib.h>
 
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};
 
void createArray(struct myArray * a, int tSize, int uSize){
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}
 
void show(struct myArray *a){
    for (int i = 0; i < a->used_size; i++) {
        printf("%d\n", (a->ptr)[i]);
    }
}
 
void setVal(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
 
int main(){
    struct myArray marks;
    createArray(&marks, 10, 2);
    printf("We are running setVal now\n");
    setVal(&marks);
 
    printf("We are running show now\n");
    show(&marks);
 
    return 0;
}
```

---

## Output Example

```
Enter element 0: 12
Enter element 1: 13
We are running show now
12
13
```

---

## Reflection

With this, I now understand how to define a custom array data type in C using structures, how to allocate memory for it, set values, and display its contents. Harry's explanation made it much easier to follow, even if some syntax was new.

If you want more details or need help with C basics, check out Harry's C playlist on YouTube or visit [codewithharry.com](https://www.codewithharry.com).

---

> These are my notes based on Harry's tutorial, rewritten in my own words for better understanding!
````
