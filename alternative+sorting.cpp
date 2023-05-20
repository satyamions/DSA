//Given an array of integers, 
//print the array in such a way that the first element is first maximum and second element is first minimum and so on.

#include <iostream>
using namespace std;
#include <bits/stdc++.h>


void alterSort(int arr[], int n){
    
    sort(arr, arr+n); 
    
    int i = 0;
    int j = n-1;
    
    while(i<j){
        cout<<arr[j--]<<" ";
        cout<<arr[i++]<<" ";
    }
    
    if(n%2 != 0){
        cout<<arr[i];
    }
}


int main()
{
    int arr[] = {1, 12, 4, 6, 7, 10, 22};
    int n = sizeof(arr)/sizeof(arr[0]);
    alterSort(arr, n);
    return 0;
}
