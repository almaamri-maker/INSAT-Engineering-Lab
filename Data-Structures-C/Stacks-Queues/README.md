# Stacks & Queues Implementation in C

This directory contains production-ready implementations of Abstract Data Types (LIFO & FIFO) using dynamic linked structures in C11.

## Contents

* **`linked_stack.c`**: LIFO Stack implementation supporting core operations, non-destructive traversal, parity decomposition (`decomposer`), and sorted stack merging (`fusion`).
* **`linked_queue.c`**: FIFO Queue implementation using dual pointers (`tete` and `queue`) for $O(1)$ constant-time enqueue and dequeue.

## Complexity Analysis

| Structure | Operation | Time Complexity | Space Complexity |
| :--- | :--- | :--- | :--- |
| **Stack (LIFO)** | Push / Pop / Top | $O(1)$ | $O(1)$ |
| **Stack (LIFO)** | Decomposition / Fusion | $O(n)$ | $O(n)$ |
| **Queue (FIFO)** | Enqueue / Dequeue | $O(1)$ | $O(1)$ |
| **Queue (FIFO)** | Traversal / Display | $O(n)$ | $O(1)$ |

## Design Highlights
* **Constant Time Operations**: Enqueue operations leverage a dedicated tail pointer to achieve $O(1)$ complexity without traversing the list.
* **Non-Destructive Operations**: Inspection and display functions preserve structural integrity via dedicated traversal pointers.
* **Memory Safety**: Systematic `free()` execution during pops/dequeues to eliminate dynamic allocation memory leaks.
