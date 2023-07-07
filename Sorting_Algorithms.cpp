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



int* selection_sort(int *arr , int n){

    for (int i=0 ; i<n-1 ; i++){   // no need to check till last as it will come automatically to its position
        //setting min to first index for first pass and second in second pass as we need to find second smallest now
        int index = i;
        int min = arr[i];
        for (int j=i ; j<n ; j++){
            //checking for smaller element than min
            if (arr[j]<min){
                //setting min to smaller elements if founded
                min = arr[j];
                index = j;
            }
        }
        //swapping min of sub-array with ith index element
        int temp = arr[i];
        arr[i] = min;
        arr[index] = temp;
    }

    return arr;
}


int* insertion_sort(int* arr , int n){
    for (int i=1 ; i<n ; i++){
        int key = arr[i];
        for (int j=i-1 ; j>=0 ; j--){
            if (key < arr[j]){
                arr[j+1] = arr[j];
                if (j==0){
                    arr[j] = key;
                }
            }
            else {
                arr[j+1] = key;
                break;
            }
        }
    }

    return arr;
}



int main(){
    int arr[6] = {4,3,7,2,54,0};
    // bubble_sort(arr,6);
    insertion_sort(arr,6);
    disp_array(arr,6);
    return 0;
}