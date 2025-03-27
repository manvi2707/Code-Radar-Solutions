#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    int arr[num];
    fort(int i = 0; i<num; i++){
        scanf("%d" , &arr[i]);
    }
    int even_num = 0;
    int odd_num = 0;
    for(int i = 0; i<num; i++){
        if(arr[i] % 2 == 0){
            even_num++;
        }
        else{
            odd_num++;
        }
    }
    printf("%d %d" , even_num , odd_num);
    return 0;
}