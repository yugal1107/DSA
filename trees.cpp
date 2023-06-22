#include <iostream>
using namespace std;


class Tnode{
    public:
        int data;
        Tnode* left;
        Tnode* right ;
    
    Tnode(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Tnode* make_tree(Tnode* root){
    cout << "Enter the data : ";
    int d;
    cin >> d;
    if (d == -1 ){
        return NULL;
    }
    root = new Tnode(d);
    
    cout << "Left of the data " << d << endl;
    root -> left = make_tree(root -> left);

    cout << "Right of the data " << d << endl;
    root -> right = make_tree(root -> right);

    return root;
}


void print(Tnode* node){
    if (node -> data != -1){
        cout << node -> data;
    }
}
void show_tree(Tnode* root){

}


int main (){

    Tnode* root = NULL;
    make_tree(root); 

    show_tree(root);

    return 0;
}