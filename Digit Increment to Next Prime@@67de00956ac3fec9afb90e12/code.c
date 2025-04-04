#include<stdio.h>
int incrementToPrimeDigits(int N){
    int prime = 0;
    int n = 0;
    while(N != 0){
        n = n*10 + (N%10);
        N = N / 10;
    }
    if n == 0{
        prime = 2;
    }
    while(n != 0){
        int digit = n % 10;
        if(digit == 0 || digit == 1){
            prime = prime*10 + 2;
        }
        else if(digit == 2){
            prime = prime*10 + 3;
        }
        else if(digit == 4 || digit == 3){
            prime = prime*10 + 5;
        }
        else if(digit == 5 || digit == 6){
            prime = prime*10 + 7;
        }
        else if(digit >= 7){
            prime = prime*10 + 2;
        }
        n = n / 10;
    }
    return prime;
}