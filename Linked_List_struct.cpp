#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void insertion(node* &head,int d){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = d;
    temp->next = head;
    head = temp;
    
}

void insertAtLast(){
    
}

void print(node* hello){
    cout << hello->data <<endl;
    while(hello->next != NULL){
        hello = hello->next;
        cout << hello->data <<endl;
    }
}

int main(){
    cout<<"Hello World"<< endl;
    node* a = (node*)malloc(sizeof(node));
   
    node* head = a;
    a->data = 10;
    a->next = NULL;
    
    insertion(head,20);
    insertion(head,32);
    insertion(head,76);
    insertion(head,54);
    print(head);
    
    return 0;
}
