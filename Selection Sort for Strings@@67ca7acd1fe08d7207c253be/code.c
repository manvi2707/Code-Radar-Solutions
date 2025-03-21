#include<stdio.h>
void selectionSort(char *arr[] , int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n; j++){
            if(arr[j][0] < arr[i][0]){
                char* temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(char* arr[] , int n){
    for(int i = 0; i<n; i++){
        printf("%s " , arr[i]);
    }
}