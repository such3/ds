#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct {
  int data[MAX];
  int front;
  int rear;
} Queue;

void initQueue(Queue *q) {
  q->front = q->rear = -1;
}

void enqueue(Queue *q, int value) {
  if(q->front == -1){
    q->front = 0;
  }
  q->rear++;
  q->data[q->rear] = value;
  printf("%d enqueued\n", value);
}

int dequeue(Queue *q) {
  int dequeued = q->data[q->front];
  q->front++;
  return dequeued;
}

// Check if the queue is full
int isFull(Queue *q) {
  return q->rear == MAX - 1; // If rear is at MAX-1, the queue is full
}

// Check if the queue is empty
int isEmpty(Queue *q) {
  return q->front == -1 || q->front > q->rear; // If front is -1 or front > rear, the queue is empty
}

// Display all elements in the queue
void display(Queue *q) {
  if (isEmpty(q)) {
    printf("Queue is empty! Nothing to display.\n");
    return;
  }
  printf("Queue elements (from front to rear): ");
  for (int i = q->front; i <= q->rear; i++) {
    printf("%d ", q->data[i]);
  }
  printf("\n");
}
int peek(Queue *q) {
    if (q->front == -1 || q->front > q->rear) { // Queue is empty
        printf("Queue is empty! No front element.\n");
        return -1; // Indicate error
    }
    return q->data[q->front]; // Return the front element
}

int main() {
Queue q;  // Declare the queue
    initQueue(&q);  // Initialize the queue

    int choice, value;

    while (1) {
        // Display the menu options
        printf("\nQueue Operations Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Check if Queue is Full\n");
        printf("5. Check if Queue is Empty\n");
        printf("6. Display Queue\n");
        printf("7. Exit\n");

        // Get user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Enqueue operation
                if (isFull(&q)) {
                    printf("Queue is full! Cannot enqueue new elements.\n");
                } else {
                    printf("Enter the value to enqueue: ");
                    scanf("%d", &value);
                    enqueue(&q, value);
                }
                break;

            case 2:
                // Dequeue operation
                if (isEmpty(&q)) {
                    printf("Queue is empty! Cannot dequeue.\n");
                } else {
                    int dequeuedValue = dequeue(&q);
                    if (dequeuedValue != -1) {
                        printf("Dequeued value: %d\n", dequeuedValue);
                    }
                }
                break;

            case 3:
                // Peek operation
                if (isEmpty(&q)) {
                    printf("Queue is empty! No front element.\n");
                } else {
                    printf("Front element is: %d\n", peek(&q));
                }
                break;

            case 4:
                // Check if queue is full
                if (isFull(&q)) {
                    printf("Queue is full.\n");
                } else {
                    printf("Queue is not full.\n");
                }
                break;

            case 5:
                // Check if queue is empty
                if (isEmpty(&q)) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue is not empty.\n");
                }
                break;

            case 6:
                // Display the queue
                display(&q);
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