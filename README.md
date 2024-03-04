# Deque Implementation in C

This project implements a double-ended queue (deque) using a doubly linked list in C. It supports operations such as insertion and deletion from both ends, checking the size, and more, demonstrating fundamental data structure manipulation in C.

## Features

- **Initialization**: Set up an empty deque.
- **Check if Empty**: Determine if the deque contains no elements.
- **Insertion**: Add elements to the front or rear of the deque.
- **Deletion**: Remove elements from the front or rear, returning their value.
- **Peek**: Retrieve the value from the front or rear without removing the element.
- **Size**: Get the current number of elements in the deque.
- **Cleanup**: Properly free all allocated memory and reset the deque.

## Getting Started

### Prerequisites

Ensure you have a C compiler installed on your system. This project uses `gcc`, but you can use any standard C compiler.

### Compilation

A `Makefile` is provided for easy compilation. To compile the project, navigate to the project directory in your terminal and run:

```bash
make
