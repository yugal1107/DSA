#include <iostream> 
using namespace std ;

class node{
    public:
        int data;
        node* next;

    node(int d){
        data = d;
    } 

    ~node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is freed for node with data :" << value << endl;
    }

    void insertLeft(node* &head,int d){
        node* temp = new node(d);
        temp -> next = head;
        head = temp;
    }  

    void insertN(node* &head, int d, int pos){
        //first travese till (n-1)th node
        node* temp_head = head;
        if (pos == 1){
            insertLeft(head,d);
        }
        else{
            for(int i=1 ; i<pos-1 ; i++){
                temp_head = temp_head -> next;
            }

            //now insert a new node
            node* temp = new node(d);
            temp -> next = temp_head -> next;
            temp_head -> next = temp;
        }
    } 

    void del(node* &head, int pos){
        //prev will point the prrevious node to the node to be deleted
        node* prev = head;
        node* curr = NULL;
        if(pos==1){

            head = head -> next ;
            prev -> next = NULL;
            delete prev;
        }
        else{
            for(int i=1; i<pos-1 ;i++){
                prev = prev -> next;
            }
            curr = prev -> next;
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;
        }
    }


    void insertRight(node* head,int d){
        if (head = NULL){
            node* temp = new node(d);
            temp -> next = NULL;
        }
        else {
            while(head->next != NULL){
                head = head -> next;
            }
            node* temp = new node(d); 
            temp -> next = NULL;
            head -> next = temp;
        }
    }

   void print(node* head){
        cout << head -> data << " ";
        while(head -> next != NULL){
            head = head -> next;
            cout << head -> data << " ";
        }
   }

};
