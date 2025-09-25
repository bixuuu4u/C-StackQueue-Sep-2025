# C Stack and Queue Implementation

## Author

Biswajeet Sahoo  
GitHub: [https://github.com/bixuuu4u](https://github.com/bixuuu4u)

---

## Description

This implements **Stack** and **Queue** containers in C, mimicking **C++ STL style**.

- **Stack** is implemented using a **dynamic array (vector)**.
- **Queue** is implemented using a **doubly linked list**.

All functions are prefixed to avoid naming conflicts and follow **STL-like function names**.

---

## Directory Structure

project/
├── vector.h
├── vector.c
├── stack.h
├── stack.c
├── list.h
├── list.c
├── queue.h
├── queue.c
├── main.c
└── README.md

---

## Stack Implementation

### Stack Struct

```c
typedef struct Stack {
    Vector v; // underlying dynamic array
} Stack;
```

### Functions

| Function                             | Description                                          |
| ------------------------------------ | ---------------------------------------------------- |
| `stack_init(Stack *s, int capacity)` | Initializes the stack.                               |
| `stack_destroy(Stack *s)`            | Frees memory used by the stack.                      |
| `stack_push(Stack *s, int value)`    | Pushes value onto the stack.                         |
| `stack_pop(Stack *s)`                | Removes top value from the stack.                    |
| `stack_top(Stack *s)`                | Returns the top value of the stack.                  |
| `stack_empty(Stack *s)`              | Returns 1 if stack is empty, 0 otherwise.            |
| `stack_display(Stack *s)`            | Prints all elements of the stack from top to bottom. |

---

## Queue Implementation

### Queue Struct

```c
typedef struct Queue {
    List l; // underlying doubly linked list
} Queue;
```

### Function

| Function                       | Description                                  |
| ------------------------------ | -------------------------------------------- |
| `queue_init(Queue *q)`         | Initializes the queue.                       |
| `queue_destroy(Queue *q)`      | Frees all nodes in the queue.                |
| `enqueue(Queue *q, int value)` | Adds value at the back of the queue.         |
| `dequeue(Queue *q)`            | Removes value from the front of the queue.   |
| `queue_front(Queue *q)`        | Returns the front element of the queue.      |
| `queue_back(Queue *q)`         | Returns the last element of the queue.       |
| `queue_empty(Queue *q)`        | Returns 1 if queue is empty, 0 otherwise.    |
| `queue_size(Queue *q)`         | Returns the number of elements in the queue. |
| `queue_display(Queue *q)`      | Prints all elements from front to back.      |

---

## Example Usage

### Stack

```c
Stack s;
stack_init(&s, 5);
stack_push(&s, 10);
stack_push(&s, 20);
stack_display(&s); // Prints top -> bottom
stack_pop(&s);
stack_destroy(&s);
```

### Queue

```c
Queue q;
queue_init(&q);
enqueue(&q, 10);
enqueue(&q, 20);
queue_display(&q); // Prints front -> back
dequeue(&q);
queue_destroy(&q);
```

---

## Compilation

Since all source files are included directly, you only need to compile the main file:

```bash
gcc main.c -o main
```

Run:

```bash
./main
```

## Notes

- Stack uses **vector** for dynamic array behavior.
- Queue uses **doubly linked list** for O(1) enqueue/dequeue.
- All functions follow **STL naming style**.
- Queue front/back matches **std::queue** behavior.
- Stack top/empty matches **std::stack** behavior.

---

## License

MIT License
