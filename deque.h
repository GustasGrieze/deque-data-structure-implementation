// deque.h
#ifndef DEQUE_H
#define DEQUE_H

// Change DataType as needed to suit the type of data stored in the deque.
typedef int DataType;

// Node structure for the doubly linked list.
typedef struct node {
    DataType data;
    struct node *next;
    struct node *prev;
} Node;

// Deque structure.
typedef struct {
    Node *front;
    Node *rear;
    int size;
} Deque;

void initDeque(Deque *dq);
int isEmpty(Deque *dq);
int isFull(void);
void insertFront(Deque *dq, DataType data, int *err); // 'err' is set to -1 if memory allocation fails, 0 otherwise.
void insertRear(Deque *dq, DataType data, int *err); // 'err' is set to -1 if memory allocation fails, 0 otherwise.
DataType deleteFront(Deque *dq, int *err); // 'err' is set to -1 if the deque is empty, 0 otherwise.
DataType deleteRear(Deque *dq, int *err); // 'err' is set to -1 if the deque is empty, 0 otherwise.
DataType getFront(Deque *dq, int *err); // 'err' is set to -1 if the deque is empty, 0 otherwise.
DataType getRear(Deque *dq, int *err); // 'err' is set to -1 if the deque is empty, 0 otherwise.
int size(Deque *dq);
void destroyDeque(Deque *dq);

#endif
