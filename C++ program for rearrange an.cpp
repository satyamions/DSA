// C++ program for rearrange an
// array such that arr[i] = i.
#include <iostream>
using namespace std;

void rearrangeArr(int arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i] != -1 && arr[i] != i){
            int x = arr[i];
            while(arr[x] != -1 && arr[x] != x){
                int y = arr[x];
                arr[x] = x;
                x = y;
            }
            arr[x] = x;
        }
        if(arr[i] != i){
            arr[i] = -1;
        }
    }
    
}

void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
}

int main()
{
    int arr[] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
 
    int size = sizeof(arr) / sizeof(arr[0]);
 
    
    rearrangeArr(arr, size);
    printArr(arr, size);

    return 0;
}
