//Maximum profit by buying and selling a share at most twice

#include <iostream>
using namespace std;
#include<climits>


int max_profit(int arr[], int size){
    int profit = 0;
    for(int i = 0; i<size; i++){
        if(arr[i]>arr[i-1]){
            profit += arr[i] - arr[i-1];
        }
    }
    return profit;
}


int main() {
 
    int arr[] = {5,2,6,1,4,7,3,6};
      int size = sizeof(arr)/sizeof(arr[0]);
      cout<<max_profit(arr,size);
    return 0;
}