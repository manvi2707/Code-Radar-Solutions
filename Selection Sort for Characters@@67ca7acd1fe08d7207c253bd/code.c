#include<stdio.h>
char selectionSort(char arr[] , int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[i] > arr[i+1]){
                char temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

char printArray(char arr[] , int n){
    for(int i = 0; i<n; i++){
        printf("%c " , arr[i]);
    }
}