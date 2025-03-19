#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    int k = 2;
    int line = 1;
    for(int i = num; i>0; i--){
        int m = line;
        for(int j = 1; j<i; j++){
            printf(" ");
        }
        for(int j = 1; j<k; j++){
            if(j<=line){
                printf("%d" , j);
            }
            else{
                m -= 1;
                printf("%d" , m);
            }
        }
        line += 1;
        k+= 2;
        printf("\n");
    }
    return 0;
}