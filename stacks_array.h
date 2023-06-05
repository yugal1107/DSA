#include<iostream>
using namespace std;

// We have to make a class named stack in which we will do so many operations using member functions.

class stack{
    public:
    int* arr;
    int top;
    int size;


    //constructor
    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int d){
        if(size-top>=1){
            top++;
            arr[top]=d;
        }
        else {
            cout << "Stack overflow !!!" << endl;
        }
    }

    void pop(){
        if(top!=-1){
            top--;
        }
        else {
            cout << "Your stack is already Empty !!" << endl;
        }
    }
    
    void display(){
        if (top==-1){
            cout << "The stack is empty !!!" << endl;
        }
        else {
            for (int i=0 ; i<=top ; i++){
                cout << arr[i] << endl;
            }
        }
    }

    void peak(){
        if (top==-1){
            cout << "The stack is empty !!!" << endl ;
        }
        else {
            cout << arr[top] << endl;
        }
    }

    bool isempty(){
        if (top==-1){
            return true;
        } 
        else {
            return false;
        }
    }




};

// int main(){
//     stack yugal(5);
//     yugal.push(32);
//     yugal.push(72);
//     yugal.push(12);
//     yugal.peak();
//     yugal.pop();
//     yugal.pop();
//     yugal.display();
//     yugal.pop();
//     yugal.pop();
//     cout << yugal.isempty() << endl;



// }