//A Simple C++ program to find minimum average subarray

using namespace std;
#include<bits/stdc++.h>

void findsubarrayleast(int arr[], int k, int size){
    int min=INT_MAX,minindex;
    
    for(int i=0;i<=size-k;i++){
        int sum = 0;
        for(int j=i;j<i+k;j++){
            sum += arr[j];
        }
        if(sum<min){
            min = sum;
            minindex = i;
           }
    }

    cout<<"subarray with min avg is : ";
    for(int i = minindex; i<minindex+k; i++){
        cout<<arr[i]<<" ";
    }
}


int main() {
int arr[]={3, 7, 90, 20, 10, 50, 40};
int size=sizeof(arr)/sizeof(arr[0]),k=3;
//function call
findsubarrayleast(arr,k,size);
return 0;
}
