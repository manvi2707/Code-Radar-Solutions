#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int welcome() {
    int num , bit;
    int n = 0;
    int rem;
    int arr[50];
    scanf("%d %d" , &num , &bit);
    while (num != 0){
        rem = num % 2;
        num = num / 2;
        arr[n] = rem;
        n += 1;
    }
    int req = arr[bit-1];
    return req;
}

int main() {
    printf("%d", welcome());
    return 0;
}