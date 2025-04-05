#include<stdio.h>
int findKthMissing(int arr[] , int n , int k){
    int m = 1;
    int req;
    int p = 0;
    while(p != n-1){
        if(m == arr[p]){
            m++;
            p++;
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