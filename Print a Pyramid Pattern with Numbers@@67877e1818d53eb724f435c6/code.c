#include<stdio.h>

int main(){
    int num;
    int k = 1;
    scanf("%d" , &num);
    for(int i = 0; i<num; i++){
        for(int j = 0; j<=i; j++){
            printf("%d " , k+j);
        }
        printf("\n");
    }
    return 0;
}