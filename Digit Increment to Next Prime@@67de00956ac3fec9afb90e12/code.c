#include<stdio.h>
int incrementToPrimeDigits(int N){
    int prime = 0;
    while(N != 0){
        int digit = N % 10;
        if(digit == 0 || digit == 1 || digit == 2){
            prime = prime*10 + 2;
        }
        else if(digit == 3){
            prime = prime*10 + 3;
        }
        else if(digit == 4 || digit == 5){
            prime = prime*10 + 5;
        }
        else if(digit == 6 || digit == 7){
            prime = prime*10 + 7;
        }
        else if(digit>7){
            prime = prime*10 + 2;
        }
        N = N / 10;
    }
    return prime;
}