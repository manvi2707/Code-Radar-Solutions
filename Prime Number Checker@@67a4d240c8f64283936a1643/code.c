#include<stdio.h>
int isPrime(int num){
    int cout = 0;
    if(num == 0 || num == 1 || num == 2){
        printf("%d\n" , 1);
    }
    for(int i = 2; i<num/2; i++){
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