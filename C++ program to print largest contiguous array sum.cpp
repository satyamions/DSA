//// C++ program to print largest contiguous array sum
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int LargestSumCont(int arr[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
    
    for(int i=0; i<size; i++){
        max_ending_here = max_ending_here + arr[i];
    
        if(max_ending_here>max_so_far){
            max_so_far = max_ending_here;
        }
    
        if(max_ending_here<0){
            max_ending_here = 0;
        }
    }
    return max_so_far;
}

int main()
{
    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int size = sizeof(arr) / sizeof(arr[0]);
 
    // Function Call
    int max_sum = LargestSumCont(arr, size);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
