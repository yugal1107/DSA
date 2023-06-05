#include<iostream> 
using namespace std;

class Queue{
    public:
    int size;
    int* queue;
    int front=0;
    int rear=0;

    Queue(int size){
        this -> size = size;
        queue = new int[size];
        cout << "A queue of size " << this -> size << " is made ." << endl;
    }


    //member functions

    void enqueue(int data){
        
        if (rear == size){
            cout << "Stack Overflow !!!" << endl;
        }

        else {
            queue[rear] = data;
            rear++;
        }
    }

    void dequeue(){
        if (rear == front){
            cout << "Queue is empty !!!" << endl;
        }
        else {
            for(int i=0 ; i<(rear-front-1) ; i++){
                queue[i]=queue[i+1];
            }
            rear--;
        }
    }

    void display(){
        for (int i=0 ; i<(rear-front) ; i++){
            cout << queue[i] << endl;
        }
    }
};

// int main(){
//     Queue yugal(10);
//     yugal.enqueue(45);
//     yugal.enqueue(47);
//     yugal.enqueue(89);
//     yugal.enqueue(81);
//     yugal.display();
//     yugal.dequeue();
//     yugal.dequeue();
//     yugal.display();






//     return 0;
// }