#include<stdio.h>
#include<string.h>
char selectionSort(char* arr[] , int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1; j++){
            char c1 = getchar(arr[j]);
            char c2 = getchar(arr[j+1]);
            if(c1 > c2){
                char* temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

char printArray(char* arr[] , int n){
    for(int i = 0; i<n; i++){
        printf("%s " , arr[i]);
    }
}