#include<stdio.h>
int findUnsortedSubarray(int arr[] , int n){
    int min = 100000;
    int max = -100000;
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
    if(arr[n-1]!= max){
        end = n-1;
    }
    else{
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
    if(end != 0 && start != 0){
        return(end-start+1);
    }
    else{return 0;}
}
