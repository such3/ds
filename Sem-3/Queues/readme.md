
---

### **Easy**

1. **Implement a Queue Using Arrays**
    - **Problem Statement:** Implement a basic queue using an array. Implement functions for enqueue (insertion) and dequeue (removal).
    - **Function Signature:**
      ```c
      void enqueue(int queue[], int* front, int* rear, int max_size, int value);
      int dequeue(int queue[], int* front, int* rear);
      ```

2. **Queue Implementation Using Linked List**
    - **Problem Statement:** Implement a queue using a singly linked list. Implement enqueue and dequeue functions.
    - **Function Signature:**
      ```c
      void enqueue(struct QueueNode** front, struct QueueNode** rear, int value);
      int dequeue(struct QueueNode** front);
      ```

3. **Check if a Queue is Empty**
    - **Problem Statement:** Implement a function to check if a queue is empty.
    - **Function Signature:**
      ```c
      int is_empty(struct QueueNode* front);
      ```

---

### **Medium**

4. **Implement a Circular Queue**
    - **Problem Statement:** Implement a circular queue using an array.
    - **Function Signature:**
      ```c
      void enqueue(int queue[], int* front, int* rear, int max_size, int value);
      int dequeue(int queue[], int* front, int* rear);
      ```

5. **Queue Using Two Stacks**
    - **Problem Statement:** Implement a queue using two stacks.
    - **Function Signature:**
      ```c
      void enqueue(struct Stack* stack, int value);
      int dequeue(struct Stack* stack);
      ```

6. **Reverse a Queue Using Recursion**
    - **Problem Statement:** Reverse the elements of a queue using recursion.
    - **Function Signature:**
      ```c
      void reverse_queue(struct QueueNode** front, struct QueueNode** rear);
      ```

7. **First Non-Repeating Character in a Stream**
    - **Problem Statement:** Given a stream of characters, print the first non-repeating character every time a new character is inserted into the queue.
    - **Function Signature:**
      ```c
      void print_first_non_repeating(struct QueueNode* front);
      ```

---

### **Hard**

8. **Generate Binary Numbers Using Queue**
    - **Problem Statement:** Use a queue to generate the first N binary numbers.
    - **Function Signature:**
      ```c
      void generate_binary_numbers(int n);
      ```

9. **Sliding Window Maximum (Deque-based)**
    - **Problem Statement:** Given an array and a sliding window size `k`, find the maximum element in each sliding window.
    - **Function Signature:**
      ```c
      void sliding_window_maximum(int arr[], int n, int k);
      ```

10. **Implement a Priority Queue**
    - **Problem Statement:** Implement a priority queue using a binary heap (min-heap or max-heap).
    - **Function Signature:**
      ```c
      void insert(struct PriorityQueue* pq, int value);
      int extract_max(struct PriorityQueue* pq);
      ```

---

