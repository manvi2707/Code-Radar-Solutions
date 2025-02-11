#include <stdio.h>
int main(){
    int num;
    scanf("%d" , &num);
    int arr[32];
    int rem;
    int n = 0;
    while (num != 0){
        rem = num % 2;
        arr[n] = rem;
        n += 1;
        num = num / 2;
    }
    int req = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 1){
            req = i;
            break;
        }
    }
    printf("%d" , req);
    return 0;
}