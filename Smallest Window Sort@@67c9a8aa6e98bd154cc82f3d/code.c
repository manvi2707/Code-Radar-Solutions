#include<stdio.h>
int findUnsortedSubarray(int arr[] , int n){
    int num = arr[0];
    int count = 1;
    for(int i = 0; i<n; i++){
        if(arr[i] == num){
            num++;
        }
        else if(arr[i] != num && arr[i] == arr[i-1]){
            continue;
        }
        else{
            count += 1;
            num++;
        }
    }
    return count;
}
