#include<stdio.h>
#include<limits.h>
int findUnsortedSubarray(int arr[] , int n){
    int sorted_arr[n];
    for(int i = 0; i<n; i++){
        sorted_arr[i] = arr[i];
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(sorted_arr[i]<sorted_arr[j]){
                int temp = sorted_arr[i];
                sorted_arr[i] = sorted_arr[j];
                sorted_arr[j] = temp;
            }
        }
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        printf("%d %d\n" , arr[i],sorted_arr[i] );
    }
    for(int i = 0; i<n; i++){
        if(sorted_arr[i]!=arr[i]){
            count++;
        }
    }
    return count;
}
