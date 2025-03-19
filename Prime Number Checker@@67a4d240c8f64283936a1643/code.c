#include<stdio.h>
void isPrime(int num){
    int cout = 0;
    if(num == 0 || num == 1 || num == 2){
        printf("%d\n" , 1);
    }
    int n = num / 2;
    for(int i = 2; i<n; i++){
        if(num % i == 0){
            cout += 1;
        }
    }
    if(cout == 0){
        printf("%d\n" , 1);
    }
    else{
        printf("%d\n" , 0);
    }
}