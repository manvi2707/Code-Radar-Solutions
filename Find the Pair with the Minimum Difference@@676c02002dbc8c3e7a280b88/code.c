#include<stdio.h>
int main(){
    int N;
    int arr[N];
    for(int i = 0; i<N; i++){
        scanf("%d" , &arr[i]);
    }
    int min = 1000000;
    int num1;
    int num2;
    for(int i = 0; i<N; i++){
        for(int j = i+1; j<N; j++){
            if(i>j && i-j<min){
                min = i-j;
                num1 = i;
                num2 = j;
            }
            else if(j>i && j-i<min){
                min = j-i;
                num1 = j;
                num2 = i;
            }
        }
    }
    printf("%d %d" , num2 , num1);
    return 0;
}