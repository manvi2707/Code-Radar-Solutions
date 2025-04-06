#include<stdio.h>
int findUnsortedSubarray(int arr[] , int n){
    int start;
    int end;
    for(int i = 1; i<n; i++){
        if(arr[i-1] >= arr[i]){
            start = i-1;
            break;
        }
    }
    for(int i = n-2; i>=0; i--){
        if(arr[i+1] <= arr[i]){
            end = i+1;
            break;
        }
    }
    printf("%d %d " , end , start);
    int req = end-start+1;
    return req;
}
