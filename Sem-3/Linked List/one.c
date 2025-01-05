#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

// Function to create a new node
Node *createNode(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

// Insert at the beginning
Node *insertAtStart(Node *head, int data) {
  Node *newNode = createNode(data);
  newNode->next = head;
  return newNode;
}

// Insert at the end
Node *insertAtEnd(Node *head, int data) {
  Node *newNode = createNode(data);
  if (head == NULL) {
    return newNode;
  }
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = newNode;
  return head;
}

// Insert after a given key
Node *insertAfter(Node *head, int data, int key) {
  Node *newNode = createNode(data);
  Node *temp = head;
  while (temp != NULL && temp->data != key) {
    temp = temp->next;
  }
  if (temp == NULL) {
    printf("Key not found. Node not inserted.\n");
    return head;
  }
  newNode->next = temp->next;
  temp->next = newNode;
  return head;
}

// Delete the first node
Node *deleteFromStart(Node *head) {
  if (head == NULL) {
    printf("List is empty.\n");
    return NULL;
  }
  Node *temp = head;
  head = head->next;
  free(temp);
  return head;
}

// Delete the last node
Node *deleteAtEnd(Node *head) {
  if (head == NULL) {
    printf("List is empty.\n");
    return NULL;
  }
  if (head->next == NULL) {
    free(head);
    return NULL;
  }
  Node *temp = head;
  while (temp->next != NULL && temp->next->next != NULL) {
    temp = temp->next;
  }
  free(temp->next);
  temp->next = NULL;
  return head;
}

// Delete a node with a given key
Node *deleteKey(Node *head, int key) {
  if (head == NULL) {
    printf("List is empty.\n");
    return NULL;
  }
  if (head->data == key) {
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
  }
  Node *temp = head;
  while (temp->next != NULL && temp->next->data != key) {
    temp = temp->next;
  }
  if (temp->next == NULL) {
    printf("Key not found. Node not deleted.\n");
    return head;
  }
  Node *nodeToDelete = temp->next;
  temp->next = temp->next->next;
  free(nodeToDelete);
  return head;
}

// Search for a key in the list
int search(Node *head, int key) {
  Node *temp = head;
  while (temp != NULL) {
    if (temp->data == key) {
      return 1;  // Key found
    }
    temp = temp->next;
  }
  return 0;  // Key not found
}

// Print the list
void printList(Node *head) {
  if (head == NULL) {
    printf("List is empty.\n");
    return;
  }
  Node *temp = head;
  while (temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

// Menu-driven function
void menu() {
  printf("\nMenu:\n");
  printf("1. Insert at start\n");
  printf("2. Insert at end\n");
  printf("3. Insert after a key\n");
  printf("4. Delete from start\n");
  printf("5. Delete from end\n");
  printf("6. Delete a key\n");
  printf("7. Search a key\n");
  printf("8. Print the list\n");
  printf("9. Exit\n");
}

int main() {
  Node *head = NULL;
  int choice, data, key;

  while (1) {
    menu();
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter data to insert at start: ");
        scanf("%d", &data);
        head = insertAtStart(head, data);
        break;
      case 2:
        printf("Enter data to insert at end: ");
        scanf("%d", &data);
        head = insertAtEnd(head, data);
        break;
      case 3:
        printf("Enter data to insert: ");
        scanf("%d", &data);
        printf("Enter key to insert after: ");
        scanf("%d", &key);
        head = insertAfter(head, data, key);
        break;
      case 4:
        head = deleteFromStart(head);
        break;
      case 5:
        head = deleteAtEnd(head);
        break;
      case 6:
        printf("Enter key to delete: ");
        scanf("%d", &key);
        head = deleteKey(head, key);
        break;
      case 7:
        printf("Enter key to search: ");
        scanf("%d", &key);
        if (search(head, key)) {
          printf("Key %d found in the list.\n", key);
        } else {
          printf("Key %d not found in the list.\n", key);
        }
        break;
      case 8:
        printList(head);
        break;
      case 9:
        printf("Exiting program...\n");
        exit(0);
      default:
        printf("Invalid choice, please try again.\n");
    }
  }

  return 0;
}
