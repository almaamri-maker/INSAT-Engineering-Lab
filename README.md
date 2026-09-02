# INSAT Engineering Lab - Data Structures in C

Professional-grade implementations of fundamental data structures in C11, developed as part of the Semester 2 engineering curriculum. Focuses on modular architecture, memory safety, and algorithmic efficiency.

## 📂 Modules Overview

### 1. [Linked Lists](./Data-Structures-C/Linked-Lists)
- **Singly Linked Lists**: Dynamic memory management, edge-case safe deletions, arbitrary position insertion.
- **Doubly Linked Lists**: Bidirectional traversal (`suiv` / `prec`), robust node removal.

### 2. [Stacks & Queues](./Data-Structures-C/Stacks-Queues)
- **Linked Stack (LIFO)**: Safe push/pop, non-destructive traversal, parity decomposition (`decomposer`), sorted fusion (`fusion`).
- **Linked Queue (FIFO)**: Optimized dual-pointer structure (`tete` and `queue`) for $O(1)$ constant-time enqueue/dequeue.

## 📊 Summary of Algorithmic Complexities

| Data Structure | Primary Operations | Time Complexity | Memory Safety |
| :--- | :--- | :--- | :--- |
| **Singly Linked List** | Insert / Delete (Head) | $O(1)$ | Handled (`malloc`/`free`) |
| **Doubly Linked List** | Insert / Delete (Head) | $O(1)$ | Handled (`malloc`/`free`) |
| **Linked Stack** | Push / Pop / Top | $O(1)$ | Leak-free |
| **Linked Queue** | Enqueue / Dequeue | $O(1)$ | Leak-free |

## 🛠️ Build & Coding Standards
* **Language Standard**: C11 compliant.
* **Defensive Programming**: Null-checks after every dynamic allocation (`malloc`).
* **Clean Code**: No destructive traversals, explicit pointer resets.
