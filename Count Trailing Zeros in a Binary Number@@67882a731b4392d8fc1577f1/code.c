#include <stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    n = 0;
    int arr[32];
    while (num != 0){
        int rem = num % 2;
        arr[n] = rem;
        n += 1;
        num = num / 2;
    }
    int num_zeros = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 0){
            num_zeros += 1;
        }
        else{
            break;
        }
    }
    printf("%d" , num_zeros);
    return 0;
}