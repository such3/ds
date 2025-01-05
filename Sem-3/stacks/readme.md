
---

### **Easy**

1. **Implement a Stack Using an Array**
    - **Problem Statement:** Implement a stack using an array. Implement functions for push (insertion) and pop (removal).
    - **Function Signature:**
      ```c
      void push(int stack[], int* top, int max_size, int value);
      int pop(int stack[], int* top);
      ```

2. **Stack Using Linked List**
    - **Problem Statement:** Implement a stack using a singly linked list. Implement push and pop functions.
    - **Function Signature:**
      ```c
      void push(struct StackNode** top, int value);
      int pop(struct StackNode** top);
      ```

3. **Check if a Stack is Empty**
    - **Problem Statement:** Implement a function to check if a stack is empty.
    - **Function Signature:**
      ```c
      int is_empty(struct StackNode* top);
      ```

---

### **Medium**

4. **Reverse a Stack Using Recursion**
    - **Problem Statement:** Reverse the elements of a stack using recursion.
    - **Function Signature:**
      ```c
      void reverse_stack(struct StackNode** top);
      ```

5. **Balanced Parentheses**
    - **Problem Statement:** Given a string containing just the characters `'('`, `')'`, `{`, `'}'`, `[` and `]`, determine if the input string is valid (i.e., open brackets are closed by the same type of brackets and the brackets are closed in the correct order).
    - **Function Signature:**
      ```c
      int is_balanced(char* str);
      ```

6. **Evaluate an Expression (Postfix)**
    - **Problem Statement:** Evaluate a postfix expression using a stack.
    - **Function Signature:**
      ```c
      int evaluate_postfix(char* expression);
      ```

7. **Sort a Stack**
    - **Problem Statement:** Sort a stack in ascending order using only one additional stack.
    - **Function Signature:**
      ```c
      void sort_stack(struct StackNode** top);
      ```

---

### **Hard**

8. **Implement a Stack Using Two Queues**
    - **Problem Statement:** Implement a stack using two queues.
    - **Function Signature:**
      ```c
      void push(struct Queue* q, int value);
      int pop(struct Queue* q);
      ```

9. **Largest Rectangle in Histogram**
    - **Problem Statement:** Given an array representing heights of bars in a histogram, find the area of the largest rectangle that can be formed using these bars.
    - **Function Signature:**
      ```c
      int largest_rectangle_area(int heights[], int n);
      ```

10. **Maximum Element in a Stack**
    - **Problem Statement:** Implement a stack that supports `push`, `pop`, and `get_max` in O(1) time.
    - **Function Signature:**
      ```c
      void push(struct StackNode** top, int value);
      int pop(struct StackNode** top);
      int get_max(struct StackNode* top);
      ```

---
