# 2D Arrays

This folder contains my C++ implementations and revision of fundamental 2D Array and Matrix problems as part of my DSA preparation.

## Problems Covered

### Matrix Basics & Traversal

* Print Elements
* Sum of Elements
* Count Even & Odd Elements
* Largest Element
* Smallest Element
* Search Element
* Row-Wise Sum
* Column-Wise Sum

### Diagonals & Matrix Properties

* Main Diagonal
* Secondary Diagonal
* Largest Row Sum
* Largest Column Sum
* Identity Matrix
* Symmetric Matrix
* Saddle Point

### Matrix Operations

* Matrix Transpose
* Matrix Addition
* Matrix Multiplication

### Hashing & Frequency

* Frequency of Numbers

### Matrix Traversal Techniques

* Spiral Traversal
* Boundary Traversal

### In-Place Matrix Manipulation & Transformation

* Set Matrix Zeroes
* Rotate Matrix by 90°

## Concepts & Patterns Practiced

* 2D Array Initialization
* Matrix Traversal
* Row-Wise Traversal
* Column-Wise Traversal
* Searching in a Matrix
* Row & Column Operations
* Main & Secondary Diagonals
* Matrix Properties
* Matrix Transposition
* Matrix Addition
* Matrix Multiplication
* Frequency Counting
* Hashing
* Spiral Traversal
* Boundary Traversal
* In-Place Matrix Manipulation
* Matrix Rotation
* Two Pointer Technique
* Edge Case Handling
* Dry Running
* Time & Space Complexity Analysis

## Key Patterns

### Nested Loop Traversal

Use nested loops to process each element of a matrix.

* Outer loop → rows
* Inner loop → columns

### Row & Column Traversal

Separate row-wise and column-wise traversal can be used to calculate sums, find maximum values, search elements, and analyze matrix properties.

### Diagonal Traversal

The main and secondary diagonals follow specific index relationships and can be processed without traversing the entire matrix unnecessarily.

### Matrix Transposition

Transpose a square matrix by swapping elements across the main diagonal.

```text
matrix[i][j] ↔ matrix[j][i]
```

To avoid swapping elements twice, only the required half of the matrix is traversed.

### Spiral Traversal

Use four boundaries:

```text
top
bottom
left
right
```

Traverse each layer of the matrix and shrink the boundaries after completing each side.

### Boundary Traversal

Traverse only the outer boundary of the matrix while carefully handling single-row and single-column cases.

### In-Place Manipulation

Some matrix problems can be solved by modifying the original matrix instead of creating another matrix, reducing auxiliary space.

### Matrix Rotation

A 90° rotation can be achieved using matrix transposition followed by reversing the appropriate rows or columns, depending on the required rotation direction.

## Complexity

For an `n × n` matrix:

* **Full Matrix Traversal:** `O(n²)` time
* **Transpose:** `O(n²)` time
* **Matrix Addition:** `O(n²)` time
* **Matrix Multiplication:** `O(n³)` time
* **Spiral Traversal:** `O(n²)` time
* **Boundary Traversal:** `O(n)` time for an `n × n` matrix boundary
* **In-place transformations:** `O(1)` auxiliary space where applicable

> Complexity depends on the specific problem and approach used.

## Practice

Problems are implemented in C++ and practiced on:

* GeeksforGeeks
* LeetCode


## Goal

The goal of this folder is to develop strong matrix traversal, transformation, manipulation, and pattern-recognition skills while building a solid foundation for more advanced DSA topics.
