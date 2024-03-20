# Compiler to use
CC=gcc

# Compiler flags
# -g    adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
CFLAGS=-g -Wall

# The build target executable:
TARGET=deque_program

# Object files
OBJS=main.o deque.o

# The first rule is the default, building the target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Individual source files
main.o: main.c deque.h
	$(CC) $(CFLAGS) -c main.c

deque.o: deque.c deque.h
	$(CC) $(CFLAGS) -c deque.c

# Clean up build artifacts
clean:
	rm -f $(TARGET) $(OBJS)
