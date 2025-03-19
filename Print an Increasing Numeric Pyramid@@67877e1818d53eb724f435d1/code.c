#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    for(int i = 1; i<=num; i++){
        for(int j = num; j>i; j--){
            printf(" ");
        }
        for(int k = 0; k < i; k++){
            printf("%d " , 1+k);
        }
        printf("\n");
    }
    return 0;
}