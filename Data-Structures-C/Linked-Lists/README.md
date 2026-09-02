# Linked Lists Implementation in C

This directory contains clean, memory-safe implementations of fundamental linked list data structures in C11.

## Contents

* **`singly_linked_list.c`**: Singly linked list with dynamic memory allocation, edge-case safe deletions, and insertion at arbitrary positions.
* **`doubly_linked_list.c`**: Doubly linked list supporting bidirectional traversal (`suiv` and `prec` pointers) and safe node removal.

## Complexity Analysis

| Operation | Singly Linked List | Doubly Linked List |
| :--- | :--- | :--- |
| **Insertion at Beginning** | $O(1)$ | $O(1)$ |
| **Insertion at End** | $O(n)$ | $O(n)$ |
| **Deletion at Beginning** | $O(1)$ | $O(1)$ |
| **Deletion at End** | $O(n)$ | $O(n)$ |
| **Search / Traversal** | $O(n)$ | $O(n)$ |

## Key Features & Safety
* **Defensive Programming**: `malloc` null-checks on every allocation.
* **Memory Leak Prevention**: All deleted nodes are explicitly freed using `free()`.
* **Edge-case Handling**: Handled empty lists and single-element list mutations safely.
