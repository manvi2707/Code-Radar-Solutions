#include<stdio.h>
void selectionSort(char* arr[] , int n){
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIndex]) < 0) {  // Compare full strings
                minIndex = j;
            }
        }
        // Swap pointers
        char* temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void printArray(char* arr[] , int n){
    for(int i = 0; i<n; i++){
        printf("%s " , arr[i]);
    }
}