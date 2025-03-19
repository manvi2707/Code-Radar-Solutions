#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    for(int i = 1; i<=num; j++){
        for(int j = 1; j<num; j++){
            printf(" ");
        }
        for(int k = 0; k < i; k++){
            printf("%d " , i+k);
        }
    }
    return 0;
}