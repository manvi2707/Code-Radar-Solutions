#include <stdio.h>

char* welcome() {
    int num , bit;
    int n = 0;
    int rem;
    int *arr = (int*).malloc(100 * sizeof(int));
    scanf("%d %d" , &num , &bit);
    while (num != 0){
        rem = num % 2;
        num = num / 2;
        arr[n] = rem;
        n += 1;
    }
    for (int i = bit; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    int new_num = 0
    for (int i = 0; i < n - 1; i++){
        new_num += 2 * arr[i];
    }
    return(new_num);
}

int main() {
    printf("%d", welcome());
    return 0;
}