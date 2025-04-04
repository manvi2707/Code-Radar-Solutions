#include<sdtio.h>
int kthSmallest(int arr[] , int n , int k){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    if(k < n){
        result = arr[k];
    }
    else{
        result = -1;
    }
    return result;
}