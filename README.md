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
```

This command compiles the code and generates an executable named `deque_program`

### Running the Program

After compilation, you can run the program by executing:

```bash
./deque_program
```

This will execute the main program, demonstrating the deque's capabilities.

### Cleaning Up

To clean up the compiled objects and executable, run:

```bash
make clean
```

This command removes all the generated files by the compilation process, leaving only the source files.

## File Structure

- `deque.h`: Header file defining the deque structure and its interface.
- `deque.c`: Implementation of the deque's functionalities.
- `main.c`: Demonstrates the usage of the deque with a series of tests.
- `Makefile`: Simplifies the build process with make commands.
