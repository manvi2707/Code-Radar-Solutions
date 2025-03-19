#include<stdio.h>
int main(){
    int num , s = 0;
    scanf("%d" , &num);
    for(int i = 1; i<=num; i++){
        s = s + i;
    }
    printf("%d" , s);
    return 0;
}