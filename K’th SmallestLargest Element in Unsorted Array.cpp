//K’th Smallest/Largest Element in Unsorted Array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kthSmallestNum(int arr[], int k, int n){
    sort(arr, arr+n);
    return arr[k-1];
}


int main()
{
    int arr[] = {7,10,4,3,20,15};
    int n = sizeof(arr) / sizeof(arr[0]), k = 4;
 
    // Function call
    cout << "K'th smallest element is "
         << kthSmallestNum(arr, k, n);
    return 0;
}
