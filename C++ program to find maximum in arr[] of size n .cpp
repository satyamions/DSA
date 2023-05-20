// C++ program to find maximum in arr[] of size n 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largestElemArr(int arr[], int n){
    
    int i;
    int max = arr[0];
    
    for(int i=0; i<n; i++)
    if(arr[i]>max){
        max = arr[i];
    }
    return max;
    
}


int main()
{
    int arr[] = {7,10,4,3,20,15};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    cout << largestElemArr(arr, n)<< " ";
    return 0;
}
