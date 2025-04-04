#include<stdio.h>
int mountainPeak(int N){
    int copy = N;
    int l = 0;
    while(copy != 0){
        copy /= 10;
        l++;
    }
    if(l < 3){
        return -1;
    }
    int max = -1000;
    else{
        while(N!=0){
            int digit = N % 10;
            if(digit > max){
                max = digit;
            }
            else if(digit == max){
                return -1;
            }
            N /= 10;
        }
    }
    return max;
}