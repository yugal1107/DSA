// In Bubble sorting algorithm we run two loops.
//In bubble sort, we first compare two consecutive elements and swap them if the smaller number is after the bigger number and this way we make the lagest no to the end of the array.
//Similarly after putting largest element to its correct position i.e. to the rightmost, we compare rest of th list of size n-1 and so on.
//First loop for no of passes and another loop for no of compares in each pass.



#include <iostream>
using namespace std;

void disp_array(int *arr , int n){
    for (int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;
}

int* bubble_sort(int *arr , int n){
    for (int i=0 ; i<n-1 ; i++){  //as comparing will be done n-1 times if n is the size of array
        for (int j=0 ; j<n-1 ; j++){
            if (arr[j]>arr[j+1]){
                //swapping elements if first element is larger than the smaller one 
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        n--;
    }
    // cout << arr[3];
    return arr;

}

int main(){
    int arr[6] = {4,2,0,18,98,10};
    bubble_sort(arr,6);
    disp_array(arr,6);


    return 0;
}