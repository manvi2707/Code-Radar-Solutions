#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    int arr[num];
    for(int i = 0; i<num; i++){
        scanf("%d" , &arr[i]);
    }
    int n = 0;
    for(int i = 1; i<num; i++){
        if(arr[i-1] > arr[i]){
            printf("Not sorted");
            break;
        }
        else{
            n += 1;
        }
    }
    if(n == num){
        printf("Sorted");
    }
    return 0;
}