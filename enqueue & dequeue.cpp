#include <iostream>
using namespace std;

#define SIZE 5
class Queue {
private:
int arr[SIZE];
int front, rear;
public:
    Queue() {
   front = 0;
    rear = -1;
    }
 void enqueue(int value) {
if (rear == SIZE - 1) {
  cout << "Queue Overflow!" << endl;
   } else {
rear++;
 arr[rear] = value;
cout << value << " inserted." << endl;
}
}
void dequeue() {
 if (front > rear) {
cout << "Queue Underflow!" << endl;
  } else {
cout << arr[front] << " removed." << endl;
 front++;
 if (front > rear) {
  front = 0;
   rear = -1;
}
}
}
void display() {
  if (rear == -1) {
    cout << "Queue is empty." << endl;
  } else {
    cout << "Queue elements: ";
for (int i = front; i <= rear; i++) {
  cout << arr[i] << " ";
    }
 cout << endl;
}
}
};
int main() {
  Queue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.display();
q.dequeue();
q.display();
return 0;
}
