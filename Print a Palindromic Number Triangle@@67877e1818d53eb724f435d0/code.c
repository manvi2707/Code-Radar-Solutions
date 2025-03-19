#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    int k = 2;
    int line = 1;
    for(int i = num; i>0; i--){
        for(int j = 1; j<i; j++){
            printf(" ");
        }
        for(int j = 1; j<k; j++){
            if(j<=line){
                printf("%d" , j);
            }
            else{
                printf("%d" , m-1);
                m -= 1;
            }
        }
        line += 1;
        int m = line;
        k+= 2;
        printf("\n");
    }
    return 0;
}