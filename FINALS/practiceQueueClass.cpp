#include <iostream>
using namespace std;

#define MAX 100
class Queue{
    private:
        int data[MAX];
        int front;
        int rear;
    public:
        Queue(){
            front = 0;
            rear = -1;
        }
        bool isFull(){
            return rear == MAX - 1;
        }
        bool isEmpty(){
            return front > rear;
        }
        void enqueue(int element){
            if(isFull()){
                cout << "Queue is full! ";
                return;
            }
            data[++rear] = element;
        }
        int dequeue(){
            if(isEmpty()){
                cout << "Queue is Empty! ";
                return -1;
            }
            return data[front++];
        }
        int peek(){
            if(isEmpty()){
                cout << "Queue is Empty! ";
                return -1;
            }
            return data[front];
        }

};

int main (){



    return 0;
}