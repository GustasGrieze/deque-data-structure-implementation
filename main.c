#include "deque.h"
#include <stdio.h>

int main() {
    Deque dq;
    int err;

    initDeque(&dq);

    // Test inserting elements at the front and rear
    insertFront(&dq, 1, &err);
    if (err) {
        printf("Error inserting at front\n");
    } else {
        printf("Inserted 1 at front\n");
    }

    insertRear(&dq, 2, &err);
    if (err) {
        printf("Error inserting at rear\n");
    } else {
        printf("Inserted 2 at rear\n");
    }

    // Test getting front and rear elements
    DataType front = getFront(&dq, &err);
    if (err) {
        printf("Error getting front element\n");
    } else {
        printf("Front element: %d\n", front);
    }

    DataType rear = getRear(&dq, &err);
    if (err) {
        printf("Error getting rear element\n");
    } else {
        printf("Rear element: %d\n", rear);
    }

    // Test deletion at front and rear
    DataType deletedFront = deleteFront(&dq, &err);
    if (err) {
        printf("Error deleting front element\n");
    } else {
        printf("Deleted front element: %d\n", deletedFront);
    }

    DataType deletedRear = deleteRear(&dq, &err);
    if (err) {
        printf("Error deleting rear element\n");
    } else {
        printf("Deleted rear element: %d\n", deletedRear);
    }

    // Test inserting after deletions to check consistency
    insertFront(&dq, 3, &err);
    insertRear(&dq, 4, &err);
    printf("Inserted 3 at front and 4 at rear after deletions\n");

    // Check size
    printf("Deque size: %d\n", size(&dq));

    // Test potential fullness
    if (isFull()) {
        printf("Deque is potentially full (memory allocation might fail).\n");
    } else {
        printf("More elements can be added to the deque.\n");
    }

    // Cleanup
    destroyDeque(&dq);
    printf("Deque destroyed\n");

    // Recheck empty state after destruction
    if (isEmpty(&dq)) {
        printf("Deque is empty after destruction.\n");
    } else {
        printf("Deque is not empty after destruction?\n");
    }

    return 0;
}
