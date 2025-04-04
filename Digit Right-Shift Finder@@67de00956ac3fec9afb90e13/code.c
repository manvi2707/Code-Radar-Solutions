#include<stdio.h>
int digitRightShift(int N){
    int copy = N;
    int l = 0;
    while(copy!=0){
        copy /= 10;
        l++;
    }
    int digit = N % 10;
    N /= 10;
    for(int i = 0; i<l-1; i++){
        digit *= 10;
    }
    int new_number = digit + N;
    return new_number;
}