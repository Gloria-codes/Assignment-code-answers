#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int deque[MAX];
int front = -1;
int rear = -1;
// Function to insert an element at the front
void insertFront(int item) {
 if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
printf("Queue Overflow!\n");
return;
}
if (front == -1) {
 front = 0;
rear = 0;
} else if (front == 0) {
 front = MAX - 1;
} else {
 front = front - 1;
}
deque[front] = item;
printf("Inserted %d at the front.\n", item);
}
// Function to insert an element at the rear
void insertRear(int item) {
if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
printf("Queue Overflow!\n");
return;
  }
if (front == -1) {
  front = 0;
 rear = 0;
 } else if (rear == MAX - 1) {
 rear = 0;
} else {
rear = rear + 1; }
deque[rear] = item;
printf("Inserted %d at the rear.\n", item);
}
// Function to delete an element from the front
void deleteFront() {
if (front == -1) {
printf("Queue Underflow!\n");
  return;
 }
printf("Deleted element from front: %d\n", deque[front]);
if (front == rear) {
front = -1;
rear = -1;
} else if (front == MAX - 1) {
 front = 0;
} else {
front = front + 1;
}
}
// Function to delete an element from the rear
void deleteRear() {
  if (front == -1) {
printf("Queue Underflow!\n");
 return;
  }
  printf("Deleted element from rear: %d\n", deque[rear]);
 if (front == rear) {
front = -1;
rear = -1;
} else if (rear == 0) {
rear = MAX - 1;
    } else {
   rear = rear - 1;
    }
}
// Helper function to display the current elements in the deque
void display() {
if (front == -1) {
 printf("Deque is empty.\n");
        return;
    } printf("Deque elements: ");
    
int i = front;
 while (1) {
 printf("%d ", deque[i]);
if (i == rear) {
break;
  }
 i = (i + 1) % MAX;
    }printf("\n");
}
int main() {
int choice, item;
while (1) {
  printf("\n--- Double Ended Queue Menu ---\n");
  printf("1. Front Insertion\n");
  printf("2. Rear Insertion\n");
  printf("3. Front Deletion\n");
   printf("4. Rear Deletion\n");
  printf("5. Display Deque\n");
  printf("6. Exit\n");
  printf("Enter your choice: ");
 scanf("%d", &choice);
switch (choice) {
        case 1:
          printf("Enter value to insert at front: ");
          scanf("%d", &item);
          insertFront(item);
          break;
            case 2:
 printf("Enter value to insert at rear: ");
scanf("%d", &item);
   insertRear(item);
      break;
      case 3:
     deleteFront();
      break;
      case 4:
      deleteRear();
     break;
      case 5:
     display();
      break;
    case 6:
  printf("Exiting program.\n");
  exit(0);
  default:
printf("Invalid choice! Please try again.\n");
 }
 }

return 0;
}
