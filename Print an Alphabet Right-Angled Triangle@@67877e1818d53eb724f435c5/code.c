#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    for(int j = 0; j < num; j++){
        for(char letter = 'A'; letter < 'A' + num; letter++ ){
            printf("%c" , letter);
        }
        printf("\n");
    }
    return 0;
}