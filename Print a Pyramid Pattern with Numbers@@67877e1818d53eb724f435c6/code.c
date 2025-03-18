#include<stdio.h>

int main(){
    int num;
    int k = 1;
    int space;
    scanf("%d" , &num);
    for(int i = 0; i<num; i++){
        for(int j = 0; j<=i; j++){
            if(i != num-1){
                for(space = 0; space <num-1-i; space++){
                    printf(" ");
                }
            }
            printf("%d " , k+j);
        }
        printf("\n");
    }
    return 0;
}