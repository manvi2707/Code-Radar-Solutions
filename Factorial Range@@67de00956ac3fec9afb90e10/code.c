#include<stdio.h>
int facto(int N){
    int result = 1;

    for(int i = 2; i<=N; i++){
        result *= i;
    }
    return result;
}
void factorialRange(int start , int end){
    if(start < 0 || end < 0){
        printf("Invalid range");
    }
    else{
        for(int i = start ; i<=end; i++){
            int num = facto(i);
            printf("%d\n" , num);
        }
    }
}