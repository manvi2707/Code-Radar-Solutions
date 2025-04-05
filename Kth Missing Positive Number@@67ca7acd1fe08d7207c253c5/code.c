#include<stdio.h>
int findKthMissing(int arr[] , int n , int k){
    int m = 1;
    int req;
    for(int i = 0; i<n; i++){
        if(m == arr[i]){
            m++;
        }
        else{
            k--;
            if(k == 0){
                req = m;
                break;
            }
            m++;
        }
    }
    return req;
}