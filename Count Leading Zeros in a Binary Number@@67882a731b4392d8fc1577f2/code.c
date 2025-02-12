#include<stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    int arr[32];
    int n = 0;
    while (num != 0){
        int rem = num % 2;
        arr[n] = rem;
        n += 1;
        num = num / 2;
    }
    int num_zero = 33 - n;
    
    for(int i = n-1; i >= 0; i--){
        if (arr[i] == 0){
            num_zero += 1;
        }
        else{
            break;
        }
    }
    return num_zero;
}