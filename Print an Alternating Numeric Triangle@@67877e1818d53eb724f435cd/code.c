#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    for(int i = 0; i<num; i++){
        if(i % 2 == 0){
            int s = 1;
        }
        else{
            int s = 0;
        }
        for(int j = 0; j<=i; j++){
            if(s == 1){
                if(j % 2 == 0){
                    printf("%d " , s);
                }
                else{
                    printf("%d " , s-1);
                }
            }
            else{
                if(j % 2 == 0){
                    printf("%d " , s);
                }
                else{
                    printf("%d " , s+1);
                }
            }
        }
        printf("\n");
    }
    return 0;
}