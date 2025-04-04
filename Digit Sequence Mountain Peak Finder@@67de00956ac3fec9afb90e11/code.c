#include<stdio.h>
int mountainPeak(int N){
    int copy = N;
    int l = 0;
    while(copy != 0){
        copy /= 10;
        l++;
    }
    int arr[l];
    int max = -1000;
    int j = 0;
    if(l < 3){
        return -1;
    }
    else{
        while(N!=0){
            int digit = N % 10;
            int arr[j] = digit;
            j++;
            if(digit > max){
                max = digit;
            }
            else if(digit == max){
                return -1;
            }
            N /= 10;
        }
    }
    if(arr[0] > arr[1] || arr[l-1] > arr[j-2]){
        return -1;
    }
    return max;
}