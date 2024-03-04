#include "deque.h"
#include <stdio.h>
#include <stdlib.h>

void initDeque(Deque *dq) {
    dq->front = NULL;
    dq->rear = NULL;
    dq->size = 0;
}

int isEmpty(Deque *dq) {
    return dq->size == 0;
}

int isFull(void) {
    void* temp = malloc(sizeof(Node));
    if (temp == NULL) {
        return 1;
    }
    free(temp);
    return 0;
}

DataType getFront(Deque *dq, int *err) {
    if (isEmpty(dq)) {
        *err = -1;
        return -1;
    }
    *err = 0;
    return dq->front->data;
}

DataType getRear(Deque *dq, int *err) {
    if (isEmpty(dq)) {
        *err = -1;
        return -1;
    }
    *err = 0;
    return dq->rear->data;
}

int size(Deque *dq) {
    return dq->size;
}

void destroyDeque(Deque *dq) {
    int err;
    while (!isEmpty(dq)) {
        deleteFront(dq, &err);
    }
}

void insertFront(Deque *dq, DataType data, int *err) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        *err = -1;
        return;
    }
    newNode->data = data;
    newNode->next = dq->front;
    newNode->prev = NULL;
    if (isEmpty(dq)) {
        dq->front = dq->rear = newNode;
    } else {
        dq->front->prev = newNode;
        dq->front = newNode;
    }
    dq->size++;
    *err = 0;
}

void insertRear(Deque *dq, DataType data, int *err) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        *err = -1;
        return;
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = dq->rear;
    if (isEmpty(dq)) {
        dq->front = dq->rear = newNode;
    } else {
        dq->rear->next = newNode;
        dq->rear = newNode;
    }
    dq->size++;
    *err = 0;
}

DataType deleteFront(Deque *dq, int *err) {
    if (isEmpty(dq)) {
        *err = -1;
        return -1;
    }
    Node *temp = dq->front;
    DataType data = temp->data;
    dq->front = dq->front->next;
    if (dq->front == NULL) {
        dq->rear = NULL;
    } else {
        dq->front->prev = NULL;
    }
    free(temp);
    dq->size--;
    *err = 0;
    return data;
}

DataType deleteRear(Deque *dq, int *err) {
    if (isEmpty(dq)) {
        *err = -1;
        return -1;
    }
    Node *temp = dq->rear;
    DataType data = temp->data;
    dq->rear = dq->rear->prev;
    if (dq->rear == NULL) {
        dq->front = NULL;
    } else {
        dq->rear->next = NULL;
    }
    free(temp);
    dq->size--;
    *err = 0;
    return data;
}
