#include <stdio.h>

char* welcome() {
    int num;
    scanf("%d" , &num);
    int arr[32];
    int i = 0;
    while (num != 0){
        int rem = num % 2;
        arr[i] = rem;
        i += 1;
        num = num / 2;
    }
    if (arr[i - 1] == -1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}

int main() {
    welcome();
    return 0;
}