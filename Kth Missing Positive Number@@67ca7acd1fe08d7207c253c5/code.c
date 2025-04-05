#include<stdio.h>
int findKthMissing(int arr[] , int n , int k){
    int m = 1;
    int req = 10000;
    int p = 0;
    while(p != n){
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
    if(req == 10000){
        req = arr[n-1]+k;
    }
    return req;
}