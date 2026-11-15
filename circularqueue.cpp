#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
private:
    int queue[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }
void enqueue(int value) {
        if ((rear + 1) % SIZE == front) {
            cout << "Queue is full!" << endl;
            return;
        }
 if (front == -1) {
            front = 0;
        }
 rear = (rear + 1) % SIZE;
  queue[rear] = value;
 cout << value << " inserted." << endl
}

    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << queue[front] << " deleted." << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty!" << endl;
            return;
        }

        int i = front;

        cout << "Queue elements: ";
 while (true) {
  cout << queue[i] << " ";

   if (i == rear)
      break;

  i = (i + 1) % SIZE;
        }
 cout << endl;
}
};

int main() {
   CircularQueue q;
q.enqueue(10);
  q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
q.display();

 q.dequeue();
q.enqueue(50);

 q.display();
    return 0;
}
