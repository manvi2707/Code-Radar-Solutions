#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    for(int i = 0; i<num; i++){
        scanf("%d" , &arr[i]);
    }
    int max = 0;
    int min  = 100;
    for(int i = 0; i<num; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d %d" , min , max);
    return 0;
}