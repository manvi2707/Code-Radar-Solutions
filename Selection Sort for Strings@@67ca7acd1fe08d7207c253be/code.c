#include<sdtio.h>
char selectionSort(char arr[] , int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1; j++){
            if(arr[j][0] > arr[j+1][0]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

char printArray(char arr[] , int n){
    for(int i = 0; i<n; i++){
        printf("%s " , arr[i]);
    }
}