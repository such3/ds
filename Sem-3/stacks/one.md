

## **Stack Implementation Documentation**

### **1. `initStack()`**

#### **Algorithm**:
1. Initialize the stack's `top` pointer to `-1` (indicating an empty stack).
2. Set each element of the stack's `data[]` array to `-1` (optional, used for visualization).

#### **Edge Cases**:
- No real edge cases here as the function simply initializes the stack.

---

### **2. `push(Stack *s, int info)`**

#### **Algorithm**:
1. Check if the stack is full (`s->top == MAX - 1`).
    - If full, print "Stack Overflow" and return.
2. Increment the `top` pointer (`s->top++`).
3. Assign the value `info` to the stack at index `top` (`s->data[s->top] = info`).
4. Print "Pushed [value] to stack."

#### **Edge Cases**:
- **Stack Overflow**: If the `top` pointer is at `MAX - 1`, any further `push` attempts should be rejected.
- **Valid Input**: The value should be a valid integer.

#### **Dry Run**:
- Let's push `10` to an empty stack:
  ```
  top = -1
  s->data = [-1, -1, -1, -1, -1]  // Initially empty stack
  push(10)
  top = 0
  s->data = [10, -1, -1, -1, -1]  // Stack after push
  ```

---

### **3. `pop(Stack *s)`**

#### **Algorithm**:
1. Check if the stack is empty (`s->top == -1`).
    - If empty, print "Stack Underflow" and return `-1`.
2. Retrieve the value at `top` (`int poppedValue = s->data[s->top]`).
3. Decrement the `top` pointer (`s->top--`).
4. Return the `poppedValue`.

#### **Edge Cases**:
- **Stack Underflow**: If the stack is empty, popping should not be allowed, and an appropriate error message should be shown.

#### **Dry Run**:
- Let's pop from the stack that has `10`:
  ```
  top = 0
  s->data = [10, -1, -1, -1, -1]  // Stack before pop
  pop() -> poppedValue = 10
  top = -1  // After pop, stack is empty
  s->data = [-1, -1, -1, -1, -1]  // Stack after pop
  ```

---

### **4. `peek(Stack *s)`**

#### **Algorithm**:
1. Check if the stack is empty (`s->top == -1`).
    - If empty, print "Stack is empty" and return `-1`.
2. Return the value at `top` (`return s->data[s->top]`).

#### **Edge Cases**:
- **Empty Stack**: If the stack is empty, peeking should not be allowed, and an error message should be displayed.

#### **Dry Run**:
- Let's peek on a stack with a single element `10`:
  ```
  top = 0
  s->data = [10, -1, -1, -1, -1]  // Stack before peek
  peek() -> returns 10
  ```

---

### **5. `isFull(Stack *s)`**

#### **Algorithm**:
1. Check if the `top` pointer is at `MAX - 1` (`s->top == MAX - 1`).
    - If true, return `1` indicating the stack is full.
    - Else, return `0` indicating the stack is not full.

#### **Edge Cases**:
- **Full Stack**: If the stack is full, any attempt to push a new value should be rejected.

#### **Dry Run**:
- Let's check if a stack with 1 element is full (when `MAX = 5`):
  ```
  top = 0
  s->data = [10, -1, -1, -1, -1]
  isFull() -> returns 0  // Stack is not full
  ```

---

### **6. `isEmpty(Stack *s)`**

#### **Algorithm**:
1. Check if the `top` pointer is `-1` (`s->top == -1`).
    - If true, return `1` indicating the stack is empty.
    - Else, return `0` indicating the stack is not empty.

#### **Edge Cases**:
- **Empty Stack**: If the stack is empty, any pop or peek attempt should be rejected.

#### **Dry Run**:
- Let's check if a stack with 1 element is empty:
  ```
  top = 0
  s->data = [10, -1, -1, -1, -1]
  isEmpty() -> returns 0  // Stack is not empty
  ```

---

### **7. `display(Stack *s)`**

#### **Algorithm**:
1. Check if the stack is empty (`s->top == -1`).
    - If empty, print "Stack is empty" and return.
2. Iterate from index `0` to `top`:
    - Print each element (`s->data[i]`).

#### **Edge Cases**:
- **Empty Stack**: If the stack is empty, display should indicate that there's nothing to display.
- **Partial Stack**: If the stack is partially filled, display only the elements up to the current `top`.

#### **Dry Run**:
- Let's display a stack with `10` and `20`:
  ```
  top = 1
  s->data = [10, 20, -1, -1, -1]
  display() -> prints "Stack elements (from bottom to top): 10 20"
  ```

---

### **Full Algorithm for Stack Operations**

1. **`push(Stack *s, int info)`**:
    - If stack is full: Reject push.
    - Else, increment `top` and add `info` to `data[top]`.

2. **`pop(Stack *s)`**:
    - If stack is empty: Reject pop.
    - Else, return the element at `data[top]` and decrement `top`.

3. **`peek(Stack *s)`**:
    - If stack is empty: Return error.
    - Else, return the element at `data[top]`.

4. **`isFull(Stack *s)`**:
    - If `top == MAX - 1`: Return `1` (stack is full).
    - Else, return `0`.

5. **`isEmpty(Stack *s)`**:
    - If `top == -1`: Return `1` (stack is empty).
    - Else, return `0`.

6. **`display(Stack *s)`**:
    - If stack is empty: Print "Stack is empty".
    - Else, iterate over `data[0]` to `data[top]` and print each element.

---

### **Menu-based Dry Run Example**

Let's consider a dry run of the entire program with the following sequence of operations:

1. Push `10`
2. Push `20`
3. Display
4. Pop
5. Display

#### **Dry Run Steps**:

1. **Push 10**:
   ```
   top = -1
   s->data = [-1, -1, -1, -1, -1]
   push(10) -> top = 0, s->data = [10, -1, -1, -1, -1]
   ```

2. **Push 20**:
   ```
   top = 0
   s->data = [10, -1, -1, -1, -1]
   push(20) -> top = 1, s->data = [10, 20, -1, -1, -1]
   ```

3. **Display**:
   ```
   Displaying stack: 10 20
   ```

4. **Pop**:
   ```
   top = 1
   s->data = [10, 20, -1, -1, -1]
   pop() -> poppedValue = 20, top = 0
   s->data = [10, -1, -1, -1, -1]
   ```

5. **Display**:
   ```
   Displaying stack: 10
   ```

---

### **Summary of Edge Cases**:

1. **Stack Overflow**: Occurs when trying to push onto a full stack (`top == MAX - 1`).
2. **Stack Underflow**: Occurs when trying to pop from an empty stack (`top == -1`).
3. **Empty Stack**: Operations like `pop()` or `peek()` should be checked for empty stack before performing.
4. **Full Stack**: Before pushing, we should check if the stack is full to prevent overflow.

---

