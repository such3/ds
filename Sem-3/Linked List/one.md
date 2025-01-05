---

### **1. `createNode(int data)`**
**Algorithm**:
1. Allocate memory for a new node.
2. Set the node's `data` field to the provided value (`data`).
3. Set the node's `next` pointer to `NULL`.
4. Return the pointer to the new node.

---

### **2. `insertAtStart(Node *head, int data)`**
**Algorithm**:
1. Create a new node with the given `data`.
2. Set the `next` pointer of the new node to the current `head`.
3. Set the new node as the new `head` of the list.
4. Return the new `head`.

---

### **3. `insertAtEnd(Node *head, int data)`**
**Algorithm**:
1. Create a new node with the given `data`.
2. If the list is empty (`head == NULL`), set the new node as the `head` and return it.
3. Otherwise, traverse the list to find the last node (where `next` is `NULL`).
4. Set the `next` pointer of the last node to the new node.
5. Return the `head` of the list.

---

### **4. `insertAfter(Node *head, int data, int key)`**
**Algorithm**:
1. Create a new node with the given `data`.
2. Traverse the list to find the node containing `key`.
3. If the node with `key` is not found, return the original `head` (no insertion).
4. Set the `next` pointer of the new node to the `next` pointer of the found node.
5. Set the `next` pointer of the found node to the new node.
6. Return the `head` of the list.

---

### **5. `deleteFromStart(Node *head)`**
**Algorithm**:
1. If the list is empty (`head == NULL`), return `NULL`.
2. Save the current `head` node in a temporary variable.
3. Set the `head` to the `next` node of the current `head`.
4. Free the memory of the temporary node.
5. Return the new `head`.

---

### **6. `deleteAtEnd(Node *head)`**
**Algorithm**:
1. If the list is empty (`head == NULL`), return `NULL`.
2. If the list has only one node (`head->next == NULL`), free the `head` node and return `NULL`.
3. Traverse the list to find the second-to-last node.
4. Set the `next` pointer of the second-to-last node to `NULL`.
5. Free the memory of the last node.
6. Return the `head` of the list.

---

### **7. `deleteKey(Node *head, int key)`**
**Algorithm**:
1. If the list is empty (`head == NULL`), return `NULL`.
2. If the `head` contains the `key`, set `head` to the `next` node of the `head`, free the `head` node, and return the new `head`.
3. Otherwise, traverse the list to find the node containing `key`.
4. If the key is found, set the `next` pointer of the previous node to the `next` pointer of the node to be deleted.
5. Free the memory of the node containing the `key`.
6. Return the `head` of the list.

---

### **8. `search(Node *head, int key)`**
**Algorithm**:
1. Traverse the list from `head` to the last node.
2. If the current node's `data` matches the `key`, return `1` (found).
3. If the traversal reaches `NULL` without finding the `key`, return `0` (not found).

---

### **9. `printList(Node *head)`**
**Algorithm**:
1. If the list is empty (`head == NULL`), print "List is empty."
2. Traverse the list from `head` to the last node.
3. For each node, print its `data` followed by `" -> "`.
4. When the end of the list is reached (`NULL`), print `"NULL"`.

---

