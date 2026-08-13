# Linked Lists

> Part of my **Data Structures & Algorithms (DSA)** journey in **C++**.

This folder contains my implementation and practice of **Singly Linked List** problems from the **Striver A2Z DSA Sheet**, **LeetCode**, and **GeeksforGeeks**. The focus is on understanding pointer manipulation, recursion, linked-list patterns, and writing optimal solutions for common interview problems.


## Topics Covered

### Basics

* Array to Linked List
* Print Linked List
* Length of Linked List
* Search Element

### Deletion

* Delete Head Node
* Delete Tail Node
* Delete Kth Node
* Delete Node by Value
* Delete Middle Node
* Remove Nth Node From End

### Insertion

* Insert at Head
* Insert at Tail
* Insert at Position
* Insert Before Value

### Traversal & Manipulation

* Reverse Linked List (Iterative)
* Reverse Linked List (Recursive)
* Find Middle Node
* Merge Two Sorted Linked Lists
* Add Two Numbers

### Fast & Slow Pointer Pattern

* Find Middle of Linked List
* Detect Cycle
* Find Length of Loop
* Find Starting Node of Loop
* Remove Loop

### Advanced

* Palindrome Linked List
* Odd-Even Linked List
* Sort List
* Merge Sort on Linked List


## Patterns & Concepts Learned

* Dynamic Memory Allocation (`new` & `delete`)
* Node Creation
* Pointer Manipulation
* Head & Tail Pointers
* Previous, Current & Next Pointer Technique
* Fast & Slow Pointer Technique (Tortoise & Hare)
* Two Pointer Gap Technique
* In-place Linked List Manipulation
* Recursion
* Merge Sort
* Splitting Linked Lists
* Merging Sorted Linked Lists
* Carry Handling
* Edge Case Handling
* Memory Management
* Time & Space Complexity Analysis


## Important Techniques

### Fast & Slow Pointer

Used for:

* Finding the middle of a linked list
* Detecting cycles
* Finding the starting point of a cycle
* Finding the length of a loop

### Merge Sort on Linked List

* Find the middle using slow and fast pointers
* Split the linked list into two halves
* Recursively sort both halves
* Merge the two sorted lists
* Time Complexity: `O(n log n)`
* Space Complexity: `O(log n)` due to recursion stack

### Two Pointer Gap Technique

Used for:

* Removing the Nth node from the end
* Maintaining a fixed distance between two pointers

### Carry Handling

Used in:

* Add Two Numbers

Important edge cases:

* Different linked-list lengths
* Remaining carry after traversal
* Both lists ending simultaneously
* All digits being `9`


## Complexity Overview

| Operation                 | Time Complexity             |
| ------------------------- | --------------------------- |
| Traversal                 | O(n)                        |
| Search                    | O(n)                        |
| Length                    | O(n)                        |
| Insert at Head            | O(1)                        |
| Delete Head               | O(1)                        |
| Insert at Tail*           | O(1) *(Using Tail Pointer)* |
| Delete Tail               | O(n)                        |
| Insert/Delete at Position | O(n)                        |
| Reverse Linked List       | O(n)                        |
| Find Middle               | O(n)                        |
| Detect Cycle              | O(n)                        |
| Check Palindrome          | O(n)                        |
| Merge Two Sorted Lists    | O(n + m)                    |
| Sort List (Merge Sort)    | O(n log n)                  |


## Goal

The objective of this folder is to build a strong understanding of **Linked Lists, pointer manipulation, recursion, and common problem-solving patterns** that form the foundation for more advanced DSA topics and interview questions.


**Practice Platforms:** LeetCode • GeeksforGeeks • Striver A2Z DSA Sheet
