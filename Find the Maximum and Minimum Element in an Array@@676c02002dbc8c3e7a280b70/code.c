#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    int arr[num];
    for(int i = 0; i<num; i++){
        scanf("%d" , &arr[i]);
    }
    int max =arr[0];
    int min  = arr[0];
    for(int i = 1; i<num; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d %d" , min , max);
    return 0;
}