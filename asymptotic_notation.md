# Asymptotic Notations

Asymptotic notations are mathematical tools used to describe the limiting behavior of an algorithm's running time or space requirements as the input size grows towards infinity. They provide a high-level understanding of algorithm efficiency and help compare the performance of different algorithms, especially for large input sizes.

## Why Use Asymptotic Notations?

- **Abstract away machine dependencies:** Focus on the growth rate, not specific hardware or implementation details.
- **Simplify complexity analysis:** Provide a standardized language for discussing algorithm performance.
- **Compare algorithms easily:** Allow us to determine which algorithm will perform better as input size increases.

## Common Asymptotic Notations

### 1. Big O Notation (`O`)

**Definition:**  
Big O gives an upper bound on the growth rate of an algorithm. It describes the worst-case scenario.

**Example:**  
If an algorithm runs in `O(n^2)` time, its running time increases at most proportional to the square of the input size.

**Usage:**  
- `O(1)` — Constant time  
- `O(log n)` — Logarithmic time  
- `O(n)` — Linear time  
- `O(n log n)` — Linearithmic time  
- `O(n^2)` — Quadratic time

### 2. Omega Notation (`Ω`)

**Definition:**  
Omega provides a lower bound on the running time. It describes the best-case scenario.

**Example:**  
If an algorithm takes at least `Ω(n)` time, then for some inputs, it will require at least proportional to `n` operations.

### 3. Theta Notation (`Θ`)

**Definition:**  
Theta gives a tight bound (both upper and lower) on the running time. It provides an exact asymptotic behavior.

**Example:**  
If an algorithm is `Θ(n log n)`, it means its running time grows proportionally to `n log n` for large inputs, both in the best and worst cases.

### 4. Little o Notation (`o`)

**Definition:**  
Little o describes an upper bound that is not asymptotically tight. The function grows strictly slower than the reference function.

**Example:**  
If `f(n) = o(n^2)`, then `f(n)` grows slower than `n^2` for large `n`.

### 5. Little omega Notation (`ω`)

**Definition:**  
Little omega provides a lower bound that is not asymptotically tight. The function grows strictly faster than the reference function.

**Example:**  
If `f(n) = ω(n)`, then `f(n)` grows faster than `n` for large `n`.

## Summary Table

| Notation   | Meaning                        | Describes         |
|------------|-------------------------------|-------------------|
| `O(g(n))`  | ≤ c × g(n) for large n        | Upper bound       |
| `Ω(g(n))`  | ≥ c × g(n) for large n        | Lower bound       |
| `Θ(g(n))`  | Both O and Ω                  | Tight bound       |
| `o(g(n))`  | < c × g(n) for any c, large n | Non-tight upper   |
| `ω(g(n))`  | > c × g(n) for any c, large n | Non-tight lower   |

## Example: Linear Search

Consider linear search on an array of size `n`:

- **Worst-case:** The element is at the end or not present.  
  Complexity: `O(n)`
- **Best-case:** The element is at the first position.  
  Complexity: `Ω(1)`
- **Tight bound:** Average case is also linear.  
  Complexity: `Θ(n)`

## References

- [CLRS: Introduction to Algorithms](https://mitpress.mit.edu/9780262046305/introduction-to-algorithms/)
- [Big O Cheat Sheet](https://www.bigocheatsheet.com/)

---
