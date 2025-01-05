#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct {
    int data[MAX];
    int top;
} Stack;

// Initialize the stack
void initStack(Stack *s) {
    s->top = -1;  // Start with an empty stack
    // for (int i = 0; i < MAX; i++) {
    //     s->data[i] = -1;  // Initialize the stack with a default value
    // }
}

void push(Stack *s, int info) {
    if (s->top == MAX - 1) {  // Check if the stack is full
        printf("Stack Overflow! Cannot push %d.\n", info);
        return;
    }
    s->data[++(s->top)] = info;
    printf("Pushed %d to stack.\n", info);
}

int pop(Stack *s) {
    if (s->top == -1) {  // Check if the stack is empty
        printf("Stack Underflow! Cannot pop.\n");
        return -1;  // Indicating an error
    }
    int poppedValue = s->data[s->top--];  // Pop the top element and return it
    return poppedValue;
}

int peek(Stack *s) {
    if (s->top == -1) {  // Check if the stack is empty
        printf("Stack is empty! No top element.\n");
        return -1;  // Indicating an error
    }
    return s->data[s->top];
}

int isFull(Stack *s) {
    return s->top == MAX - 1;  // If top is at MAX - 1, the stack is full
}

int isEmpty(Stack *s) {
    return s->top == -1;  // If top is -1, the stack is empty
}

// Function to display all elements in the stack
void display(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Nothing to display.\n");
        return;
    }
    printf("Stack elements (from bottom to top): ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

int main() {
    Stack s;  // Declare the stack
    initStack(&s);  // Initialize the stack

    int choice, value;

    while (1) {
        // Display the menu options
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Check if Stack is Full\n");
        printf("5. Check if Stack is Empty\n");
        printf("6. Display Stack\n");
        printf("7. Exit\n");

        // Get user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Push operation
                if (isFull(&s)) {
                    printf("Stack is full! Cannot push new elements.\n");
                } else {
                    printf("Enter the value to push: ");
                    scanf("%d", &value);
                    push(&s, value);
                }
                break;

            case 2:
                // Pop operation
                if (isEmpty(&s)) {
                    printf("Stack is empty! Cannot pop.\n");
                } else {
                    int poppedValue = pop(&s);
                    if (poppedValue != -1) {
                        printf("Popped value: %d\n", poppedValue);
                    }
                }
                break;

            case 3:
                // Peek operation
                if (isEmpty(&s)) {
                    printf("Stack is empty! No top element.\n");
                } else {
                    printf("Top element is: %d\n", peek(&s));
                }
                break;

            case 4:
                // Check if stack is full
                if (isFull(&s)) {
                    printf("Stack is full.\n");
                } else {
                    printf("Stack is not full.\n");
                }
                break;

            case 5:
                // Check if stack is empty
                if (isEmpty(&s)) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;

            case 6:
                // Display the stack
                display(&s);
                break;

            case 7:
                // Exit the program
                printf("Exiting...\n");
                exit(0);
                break;

            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
