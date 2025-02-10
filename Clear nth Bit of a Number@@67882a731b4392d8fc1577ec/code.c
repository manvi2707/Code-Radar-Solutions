#include <stdio.h>

char* welcome() {
    int num , bit;
    int n = 0;
    int *arr = (int*).malloc(100 * sizeof(int));
    scanf("%d %d" , &num , &bit);
    if (num % 2 == 1){
        arr[n] = 1;
        n += 1
        num = num - 1
    }
    while(num != 1){
        if (num % 2 == 0 && num == 2){
            arr[n] = 1;
        }
        else if(num % 2 == 0 && num != 2){
            arr[n] = 0;
            n += 1;
            num = num / 2;
        }
        else if(num % 2 == 1){
            arr[n] = 1;
            n += 1;
            num = num / 2;
        }
    }
    return(arr);
}

int main() {
    printf("%s", welcome());
    return 0;
}