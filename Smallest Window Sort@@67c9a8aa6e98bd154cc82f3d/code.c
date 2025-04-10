#include<stdio.h>
#include<limits.h>
int findUnsortedSubarray(int arr[] , int n){
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    int start = 0;
    int end = 0;
    if(arr[0]!=min){
        start = 0;
    }
    else{
    for(int i = 1; i<n; i++){
        if(arr[i]<arr[i-1]){
            start = i-1; 
            break;
        }
    }}
    if(arr[n-1]!=max){
        end = n-1;
    }
    else{
        for(int i = n-1; i>0; i++){
            if(arr[i-1]>arr[i]){
                end = i;
                break;
            }
        }
    }
    int l = end-start+1;
    return l;
}
