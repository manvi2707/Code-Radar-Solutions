#include<stdio.h>
int findUnsortedSubarray(int arr[] , int n){
    int start = n;
    int end = n-1;
    for(int i = 1; i<n; i++){
        if(arr[i-1] > arr[i]){
            start = i-1;
            break;
        }
    }
    for(int i = n-2; i>=0; i--){
        if(arr[i+1] < arr[i]){
            end = i+1;
            break;
        }
    }
    int req;
    req = end-start+1;
    if(arr[0]>arr[n-1]){
        req = n;
    }
    return end;
}
