// Array Rotation by right Program
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
void reversearr(int arr[], int start, int end){
    while(start < end){
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotaterightarr(int arr[], int d, int n){
    reversearr(arr, 0, n-1);
    reversearr(arr, 0, d-1);
    reversearr(arr, d, n-1);
}

void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N = sizeof(arr) / sizeof(arr[0]);
    int d = 3;
 
    // Function calling
    rotaterightarr(arr, d, N);
    printarr(arr, N);
 
    return 0;
}
