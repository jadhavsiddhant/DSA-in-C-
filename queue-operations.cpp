#include <iostream>
using namespace std;
int queue[100];
int n = 100, front = -1 , rear = -1;
void isempty()
{
    if(front==-1 && rear==-1)
    {
        cout << "Queque is empty" << endl;
    }
    else{
        cout << "Queque is not empty" << endl;
    }
}
void isfull()
{
    if(rear==n-1){
        cout << "Queque is full" << endl;
    }
    else{
        cout << "Queque is not full" << endl;
    }
}
void enqueque(){
    int element;
    if(rear==n-1)
    {
        cout << "Overflow error"<< endl;
    }
    else{
        if (front==-1)
        {
            front = 0;
        }
        cout << "Enter the element of insertion:"<< endl;
        cin >> element;
        rear++;
        queue1[rear]=element;
    }
}
void dequeue(){
    if(front)
}
int main() 
{
  return 0;
}
void isempty()
{
    if (front == -1 && rear == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
}

void dequeue() {
    if (front == -1 && front > rear) {
        cout << "Underflow error" << endl;
    } else {
        cout << "Element dequeued: " << queue[front] << endl;
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
    
}
void peek() {
    if (front == -1 && front > rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Element at front: " << queue[front] << endl;
        for(int i = front; i <= rear; i++) {
            cout << queue[i] << "\t";
        }
    }
}
void display() {
    if (front == -1 && front > rear) {
        cout << "Queue is empty" << endl;
    } else {
        for(int i = front; i <= rear; i++) {
            cout << queue[i] << "\t";
        }
    }
}

int main() {
    int choice;
    do {
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while(choice != 5);
    return 0;
}
