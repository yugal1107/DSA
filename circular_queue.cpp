#include<iostream>
using namespace std;

class Queue{
    public:
    int size;
    int front=-1;
    int rear =-1;
    int* queue;

    //constructor 
    Queue(int size){
        this -> size = size;
        queue = new int[size];
    }

    void enqueue(int data){
        //checking if queue is full
        if(front == (rear+1)%size){
            cout << "Queue is Full !!!" << endl;
        }
        else {
            if (front == -1 && rear == -1){
                front++;
                rear++;
                queue[rear] = data;
            }
            else {
                rear = (rear+1)%size;
                queue[rear] = data;
            }
        }
    }

    void dequeue(){
        //checking if empty 
        if (rear == front == -1){
            cout << "Stack is empty !!!" << endl;
        }
        else {
            if (rear == front){
                rear = -1;
                front = -1;
            }
            else {
                front++;
            }
        }
    }


    void display(){
        for (int i = front ; i != rear ; i = (i+1)%size ){
            cout << queue[i] << " ";
        }
        cout << queue[rear] << " " << endl;
    }

};

int main(){
    Queue yugal(5);
    yugal.enqueue(12);
    yugal.enqueue(45);
    yugal.enqueue(23);
    yugal.enqueue(56);
    yugal.enqueue(1);
    yugal.enqueue(69);
    yugal.enqueue(85);
    yugal.display();
    
    
    



    return 0;
}