#include <stdio.h>

char* welcome() {
    int num;
    scanf("%d" , &num);
    int *arr = (int*)malloc(32 * sizeof(int));
    int i = 0;
    while (num != 0){
        int rem = num % 2;
        arr[i]  = rem;
        i += 1;
        num = num / 2;
    }
    if (arr[i - 1] == 1){
        return("Set");
    }
    else{
        return("Not Set");
    }
}

int main() {
    printf("%c" , welcome());
    return 0;
}