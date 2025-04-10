#include<stdio.h>
#include<limit.h>
int findUnsortedSubarray(int arr[] , int n){
    int min = INT_MAX;
    int max = INT_MIN;
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
    if(arr[0]!= min){
        start = 0;
    }
    else{
    min++;
    for(int i = 1; i<n; i++){
        if(arr[i] != min && arr[i] == arr[i-1]){

        }
        else if(arr[i] != min){
            start = i;
            break;
        }  
        else{
            min++;
        }
    }
    }
    if(arr[n-1]==arr[0] && arr[n-1]!=arr[n-2]){
        start = 1;
        end = n-1;
    }
    if(arr[n-1]!= max){
        end = n-1;
    }
    else{
        max--;
    for(int i = n-2; i>=0; i--){
        if(arr[i]!= max && arr[i] == arr[i+1]){

        }
        else if(arr[i]!=max){
            end = i;
            break;
        }
        else{
            max--;
        }
    }
    }
    if(start == 0 && end == 0){return (end-start);}
    else{
        return(end-start+1);
    }
}
