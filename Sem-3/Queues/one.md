
### Algorithm Documentation for Linear Queue Operations

**Overview**:
The C program simulates a linear queue with basic operations like enqueue, dequeue, peek, checking if the queue is full or empty, and displaying the queue. The queue is implemented using a statically allocated array of fixed size (`MAX` = 5), and the `front` and `rear` pointers track the front and the rear of the queue.

---

### Key Components:
1. **Queue Structure (`Queue`)**:
    - `data[MAX]`: Array to hold the elements of the queue.
    - `front`: Points to the first element of the queue.
    - `rear`: Points to the last element in the queue.

2. **Queue Operations**:
    - **Initialization (`initQueue`)**: Initializes the queue with `front` and `rear` set to `-1` to indicate an empty queue.
    - **Enqueue (`enqueue`)**: Adds a new element at the rear of the queue.
    - **Dequeue (`dequeue`)**: Removes and returns the element from the front of the queue.
    - **Peek (`peek`)**: Returns the front element without removing it.
    - **isFull (`isFull`)**: Checks whether the queue has reached its maximum capacity (`rear == MAX - 1`).
    - **isEmpty (`isEmpty`)**: Checks if the queue is empty (`front == -1` or `front > rear`).
    - **Display (`display`)**: Displays the elements of the queue from front to rear.
    - **Main Loop**: The user can interact with the queue through a menu for various operations.

---

### Detailed Explanation of Operations:

#### 1. **Initialization (`initQueue`)**:
- **Purpose**: This function initializes the queue by setting both `front` and `rear` to `-1`. This indicates that the queue is initially empty.
- **Edge Case**: If the queue is not initialized (i.e., `front` and `rear` are not set), any further operations will fail as the indices will not point to valid positions in the array.

   ```c
   void initQueue(Queue *q) {
       q->front = q->rear = -1;
   }
   ```

#### 2. **Enqueue Operation (`enqueue`)**:
- **Purpose**: Adds a new element at the `rear` of the queue.
- **Details**:
    - If the queue is empty (`front == -1`), set `front` to `0`.
    - The `rear` pointer is incremented, and the new element is inserted at the position `rear`.
- **Edge Case**:
    - **Queue Full**: If the queue is full (`rear == MAX - 1`), no element can be added, and a message is displayed.
    - **Full Condition**: The queue has a fixed capacity, so when `rear == MAX - 1`, the queue is considered full even if space exists at the front (which is a limitation of the linear queue implementation).

   ```c
   if (q->front == -1) {
       q->front = 0;
   }
   q->rear++;
   q->data[q->rear] = value;
   ```

#### 3. **Dequeue Operation (`dequeue`)**:
- **Purpose**: Removes and returns the front element from the queue.
- **Details**:
    - The element at the position `front` is removed and returned.
    - The `front` pointer is incremented to remove the element.
- **Edge Case**:
    - **Queue Empty**: If the queue is empty (`front == -1` or `front > rear`), no element can be dequeued, and an appropriate message is displayed.

   ```c
   int dequeued = q->data[q->front];
   q->front++;
   ```

#### 4. **Peek Operation (`peek`)**:
- **Purpose**: Returns the front element without removing it.
- **Edge Case**:
    - **Queue Empty**: If the queue is empty, an error message is displayed and a special value (`-1`) is returned to indicate failure.

   ```c
   if (q->front == -1 || q->front > q->rear) {
       printf("Queue is empty! No front element.\n");
       return -1;
   }
   return q->data[q->front];
   ```

#### 5. **isFull Operation (`isFull`)**:
- **Purpose**: Checks if the queue is full.
- **Details**:
    - The queue is considered full if the `rear` pointer is at `MAX - 1` (i.e., the last valid index of the array).

   ```c
   return q->rear == MAX - 1;
   ```

#### 6. **isEmpty Operation (`isEmpty`)**:
- **Purpose**: Checks if the queue is empty.
- **Details**:
    - The queue is empty if `front == -1` or `front > rear` (meaning there are no elements left).

   ```c
   return q->front == -1 || q->front > q->rear;
   ```

#### 7. **Display Operation (`display`)**:
- **Purpose**: Displays the current elements in the queue from `front` to `rear`.
- **Edge Case**:
    - **Queue Empty**: If the queue is empty, a message is displayed saying "Queue is empty! Nothing to display."

   ```c
   if (isEmpty(q)) {
       printf("Queue is empty! Nothing to display.\n");
       return;
   }
   for (int i = q->front; i <= q->rear; i++) {
       printf("%d ", q->data[i]);
   }
   ```

---

### Edge Cases and Limitations:
1. **Queue Full**:
    - In this implementation, the queue becomes full when the `rear` pointer reaches the last index (`MAX - 1`). If all elements are dequeued and the front pointer is advanced, you can't reuse the space from the front in a simple array-based implementation.

2. **Queue Empty**:
    - The queue is empty when `front` is `-1` or when `front` exceeds `rear` (after some dequeues).
    - Dequeuing or peeking from an empty queue results in an error message.

3. **Fixed Size**:
    - The queue has a fixed size (`MAX = 5`), so if you attempt to enqueue more than five elements, the program will not allow the operation.

---
