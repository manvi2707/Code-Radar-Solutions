#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    int arr[num];
    for(int i = 0; i<num; i++){
        scanf("%d" , &arr[i]);
    }
    int i = 0;
    if(arr[i] > arr[i+1]){
        printf("%d" , arr[i]);
    }
    int n = 1;
    for(int i = 1; i<num-1; i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            printf("%d" , arr[i]);
            n = 0;
            break;
        }
        else{
            n++;
        }
    }
    if(arr[num-1] > arr[num-2] && n != 0){
        printf("%d" , arr[num-1]);
        n = 1;
    }
    else if(n == num-2){
        printf("-1");
    }
    return 0;
}