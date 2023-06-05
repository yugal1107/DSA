#include <iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

void insertRight(node* &tail,int d){
    //Want to create a LL
    // if(tail-> data == NULL){
    //     node* temp = (node*)malloc(sizeof(node));
    //     temp -> data = d;
    //     temp -> right = NULL;
    //     temp -> left = NULL;
    // }
        node* temp = (node*)malloc(sizeof(node));
        temp -> data = d;
        temp -> left = tail;
        temp -> right = NULL;
        tail -> right = temp;
        tail = temp;
    
}

void insertLeft(node* &head, int d){
    node* temp = (node*)malloc(sizeof(node));
    temp -> data = d;
    temp -> left = NULL;
    temp -> right = head;
    head -> left = temp;
    head = temp;
}

void display(node* &head, int d){
    cout << head -> data << " " ;
    while(head -> right != NULL){
        head = head -> right;
        cout << head -> data << " ";     
    }
}

void insertN(node* &head, int d , int pos){
    if(pos==1){
        insertLeft(head,d);
    }
    else {
        node* thead = head;
        node* temp = (node*)malloc(sizeof(node));
        temp -> data = d;
        for(int i=1 ; i<pos-1 ; i++){
            thead = thead -> right;
        }

        //insertion without creating cuurent node pointer 
        temp -> right = thead -> right;
        temp -> left = thead;
        // if(thead -> right != NULL){
        //     thead -> right -> left = temp;
        // }
        thead -> right -> left = temp;
        thead -> right = temp;
    }
}

void del(node* &head,int pos ){
    
}

int main(){
    //manual creation of first node 
    node* node1 = (node*)malloc(sizeof(node));
    node1 -> data = 10;
    node1 -> left = NULL;
    node1 -> right = NULL;
    node* head = node1;
    node* tail = node1;

    insertRight(tail,78);
    insertRight(tail,98);
    insertLeft(head,12);
    insertLeft(head,67);
    insertRight(tail,66);
    insertN(head,69,2);
    insertN(head,45,1);

    display(head,55);


    
    return 0;
}