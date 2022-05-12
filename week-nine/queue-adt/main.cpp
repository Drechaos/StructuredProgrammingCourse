#include <iostream>

using namespace std;

class Queue {
private:
    int customers[2];
    int capacity;
    int rear;
    int front;

public:

    Queue() {
        rear = 0;
        front = 0;
        capacity = 2;
    }

    void enqueue(int item) {
        if (is_full()){
            cout << "The Queue has reached its capacity" << endl;
        }else{
            cout << item << " was successfully added to the Queue." << endl;
            customers[rear] = item;
            rear++;
        }
    }

    int dequeue() {
        int item;
        if (is_empty())
            cout << "The Queue is empty. Unable to remove item." << endl;
        else {
            item = customers[front];
            front++;
            cout << item << " was succesfully removed from the Queue." << endl;
        }
        return item;
    }

    bool is_full() {
        bool isFull;
        if(rear == capacity){
            isFull = true;
        }else{
            isFull = false;
        }
        return isFull;
    }

    bool is_empty() {
        bool isEmpty;
        if(front == rear){
            isEmpty = true;
        }else{
            isEmpty = false;
        }
        return isEmpty;
    }

    int size() {
        int current_size = rear - front;
        return  current_size;
    }

    void display() {
        cout << "****************************************" << endl;
        cout << "* Displaying the contents of the Queue *" << endl;
        cout << "****************************************" << endl;
        for (int i = front; i < rear; i++){
            cout << customers[i] << " is located at position " << i+1 << " in the queue." << endl;
        }            
    }

};

int main() {
    Queue queue;
    Queue q;
    queue.enqueue(100);
    queue.enqueue(200);
    queue.enqueue(300);
    queue.display();
    queue.dequeue();
    queue.display();
    queue.dequeue();
    queue.dequeue();

    return 0;
}