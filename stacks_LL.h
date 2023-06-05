#include <iostream>
#include "Linked_List_OOP.h"
using namespace std;

class stackLL{
    public:
        node* head = NULL;
        node* top = NULL;
        int size=0;

        void push(int d){
            if (head==NULL){
                node* temp = new node(d);
                temp -> next = NULL;
                head = temp;
                size++;
            }
            else {
                node* temp = new node(d);
                temp -> next = NULL;
                node* temp_head = head;
                while(temp_head -> next != NULL){
                    temp_head = temp_head -> next;
                }
                temp_head -> next = temp;
                size++;
            }
        }

        void pop(){
            if (head==NULL){
                cout << "Stack is empty !!!" << endl;
            }
            else if (head -> next == NULL){
                free(head);
                head = NULL;
            }
            else {
                node* temp = head;
                while (temp -> next -> next != NULL){
                    temp = temp -> next;
                }
                free(temp -> next); 
                temp -> next = NULL;
                size--;
            }
        }

        void display(){
            if(head == NULL){
                cout << "Stack is empty !!!" << endl;
            }
            node* temp_head = head;
            while(temp_head -> next != NULL){
                cout << temp_head -> data << endl;
                temp_head = temp_head -> next;
            }
            cout << temp_head -> data << endl;
        }
        void size_stack(){
            cout << "Size of stack is : " << size << endl;
        }

        void menu(){
            cout << "Which opertion do you want to do : \n1. Push : Insert a data in stack \n2. Pop : Delete the uppermost data from stack \n3. Display Sttack \n4. Size : Check the no of elements in stack \n";
            
        }
};

