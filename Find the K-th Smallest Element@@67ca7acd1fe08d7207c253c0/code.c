#include<stdio.h>
int kthSmallest(int arr[] , int n , int k){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int result;
    if(k <= n){
        result = arr[k-1];
    }
    else{
        result = -1;
    }
    return result;
}